require 'bcrypt'
require 'yaml'

module Checker
  class Problems
    def initialize(problems, opts={})
      @problems = problems
      @file = opts[:file]
    end

    def self.load(file)
      problems_raw = YAML.load(File.open(file, 'r').read)
      problems = {}
      problems_raw.each do |number, props|
        name = props['name']
        solution = props['solution']
        slug = props['slug']
        data = props['data']
        problems[number.to_i] = Problem.new(number.to_i, name, :solution => solution, :slug => slug, :data => data)
      end
      Problems.new(problems, :file => file)
    end

    def to_s
      data = {}

      @problems.each do |number, problem|
        if problem.name
          data[number] = {"name" => problem.name}
          if problem.solution
            data[number]['solution'] = problem.solution.to_s
          end
          if problem.custom_slug?
            data[number]['slug'] = problem.slug
          end
          if problem.data
            data[number]['data'] = problem.data
          end
        end
      end

      data.to_yaml
    end

    def save(file=@file)
      f = File.open(file, 'w')
      f.write(self.to_s)
      f.close
    end

    def [] n
      unless @problems[n]
        @problems[n] = Problem.new(n, nil)
      end

      @problems[n]
    end

    def each
      @problems.keys.sort.each do |number|
        yield @problems[number]
      end
    end
  end

  class Problem
    attr_reader :number
    attr_accessor :name, :data

    def initialize(number, name, opts={})
      @number = number
      @name = name
      @slug = opts[:slug]
      @solution = BCrypt::Password.new(opts[:solution]) if opts[:solution]
      @data = opts[:data]
    end

    def check(solution)
      @solution.is_password? solution.to_s
    end

    def solution=(solution)
      @solution = BCrypt::Password.create(solution.to_s)
    end

    def solution
      @solution.to_s if @solution
    end

    def custom_slug?
      @slug != nil
    end

    def slug
      return @slug if @slug
      return @name.downcase.gsub(/[^0-9a-z ]/, '').gsub(' ', '-') if @name
      nil
    end

    def slug= slug
      @slug = slug
    end

    def exists?
      @name
    end

    def <=> other
      @number <=> other.number
    end

    def self.make_path num, slug, ext
      "#{num.to_s.rjust(3, '0')}-#{slug}.#{ext}"
    end

    def make_path ext
      self.class.make_path(@number, slug, ext)
    end
  end
end
