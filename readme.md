# Project Euler Solutions [![Build Status](https://travis-ci.org/xfbs/euler.svg?branch=master)](https://travis-ci.org/xfbs/euler) [![GitHub release](https://img.shields.io/github/tag/xfbs/euler.svg)]()

This is a repository of my solutions to [Project Euler](https://projecteuler.net/)
problems. Mostly intended as a tool for me to use when learning a new language —
solving problems or porting solutions into a new language helps a lot to get a 
grasp on the new language's features.

Under the `src/` directory, there is a folder for (most of) the Project Euler
problems (I have to update these occasionally as new problems are released).
Each folder contains a problem description in `problem.md`. Most problem folders also
contain the (numeric) solution to the problem in the file `.solution.bcrypt` as
a [bcrypt](https://en.wikipedia.org/wiki/Bcrypt)ed hash (which is used by my 
[euler.rb](euler.rb) script to check if my solution is correct or not).

Ideally all, practically only some directories have one or more solution(s) in
subfolders named after the language they are written in, such as `c/` or
`ruby/`. Every solution subfolder contains a `Makefile` that responds to commands
such as `make build`, `make solve`, `make clean` and `make test`. The idea is
that my script will `make build` to build the solution and then call
`make solve` to get the solution, compare that with the stored answer, and
based on that decide if the solution is correct or not.

## Rules

  - A solution only accepted when it:
      - yields the correct answer.
      - takes less than 1s (1000ms) to compute the answer.
      - is completely written by myself, without having looked at someone else's
        solution (unless by accident)
      - has a full and working testing suite.
  - Every language needs to be treated with respect by trying to use its idioms
    as much as possible and by avoiding hackery.
  - Code can be shared between solutions if it helps keeping things 
    [Dry](http://wiki.c2.com/?DontRepeatYourself).
  - When possible, the standard library of the language should suffice. 

## Languages

  - [crystal](https://crystal-lang.org/), because it's pretty damn fast (thank
    you, LLVM) but also a pleasure to write because it has a rubye-sque syntax.
  - [c](https://en.wikipedia.org/wiki/C_(programming_language)), the grandfather
    of programming languages, because once you get into it, you can't escape it.
  - [ruby](https://www.ruby-lang.org), because it has a sweet, sweet syntax and
    it will always be my slow, but heartwarming favourite.
  - [rust](https://rust-lang.org), because all the cool kids at Mozilla are
    doing it and I like picking up fights with the compiler.
  - [python](https://python.org), because it's Everybody's Favourite Language
    and I haven't spent much time with it recently.

## Progress

Here is a table of the current status of the project. The numbers represent how
many miliseconds the implementation takes to compute the correct answer (blank
means not implemented). 

<details>
  <summary>Click to view</summary>

| problem | crystal |   c | ruby | rust | python | *avg* |
| ------- | ------- | --- | ---- | ---- | ------ | ----- |
| [`001`](https://projecteuler.net/problem=001) | 20ms | 10ms | 74ms | 76ms | 54ms | 46 |
| [`002`](https://projecteuler.net/problem=002) | 16ms | 14ms | 72ms | 74ms | 54ms | 46 |
| [`003`](https://projecteuler.net/problem=003) | 20ms | 12ms | 92ms | 78ms | 62ms | 52 |
| [`004`](https://projecteuler.net/problem=004) | 76ms | 20ms | 356ms | 80ms | 776ms | 261 |
| [`005`](https://projecteuler.net/problem=005) | 16ms | 10ms | 70ms | 68ms | 52ms | 43 |
| [`006`](https://projecteuler.net/problem=006) | 16ms | 12ms | 66ms | 76ms | 50ms | 44 |
| [`007`](https://projecteuler.net/problem=007) | 30ms | 18ms | 182ms | 78ms | 216ms | 104 |
| [`008`](https://projecteuler.net/problem=008) | 18ms | 12ms | 70ms |      | 56ms | 39 |
| [`009`](https://projecteuler.net/problem=009) | 20ms | 12ms | 72ms | 74ms | 98ms | 55 |
| [`010`](https://projecteuler.net/problem=010) | 472ms | 280ms |      | 106ms | 620ms | 369 |
| [`011`](https://projecteuler.net/problem=011) | 16ms |      | 74ms |      |      | 45 |
| [`012`](https://projecteuler.net/problem=012) | 76ms | 44ms | 708ms | 94ms | 1140ms | 412 |
| [`013`](https://projecteuler.net/problem=013) | 18ms | 14ms | 70ms |      | 52ms | 38 |
| [`014`](https://projecteuler.net/problem=014) | 548ms | 62ms | 1566ms | 106ms | 2230ms | 902 |
| [`015`](https://projecteuler.net/problem=015) | 18ms | 12ms | 80ms | 64ms | 64ms | 47 |
| [`016`](https://projecteuler.net/problem=016) | 18ms |      | 76ms |      |      | 47 |
| [`017`](https://projecteuler.net/problem=017) | 52ms | 12ms | 110ms |      |      | 58 |
| [`018`](https://projecteuler.net/problem=018) | 18ms | 14ms | 70ms |      |      | 34 |
| [`019`](https://projecteuler.net/problem=019) | 16ms | 14ms | 70ms |      |      | 33 |
| [`020`](https://projecteuler.net/problem=020) | 14ms |      | 68ms |      |      | 41 |
| [`021`](https://projecteuler.net/problem=021) | 78ms | 26ms | 482ms | 86ms |      | 168 |
| [`022`](https://projecteuler.net/problem=022) | 38ms | 20ms | 90ms |      |      | 49 |
| [`023`](https://projecteuler.net/problem=023) | 602ms | 164ms |      |      |      | 383 |
| [`024`](https://projecteuler.net/problem=024) | 18ms |      | 66ms | 66ms |      | 50 |
| [`025`](https://projecteuler.net/problem=025) | 16ms | 10ms | 68ms | 66ms | 52ms | 42 |
| [`026`](https://projecteuler.net/problem=026) | 48ms |      | 146ms |      |      | 97 |
| [`027`](https://projecteuler.net/problem=027) | 232ms | 76ms |      |      |      | 154 |
| [`028`](https://projecteuler.net/problem=028) | 16ms | 10ms | 68ms |      |      | 31 |
| [`029`](https://projecteuler.net/problem=029) | 146ms | 12ms | 88ms |      |      | 82 |
| [`030`](https://projecteuler.net/problem=030) | 28ms | 28ms | 92ms |      |      | 49 |
| [`031`](https://projecteuler.net/problem=031) | 40ms |      | 110ms |      |      | 75 |
| [`032`](https://projecteuler.net/problem=032) | 318ms | 744ms |      |      |      | 531 |
| [`033`](https://projecteuler.net/problem=033) | 18ms |      | 76ms |      |      | 47 |
| [`034`](https://projecteuler.net/problem=034) | 54ms | 422ms | 172ms |      |      | 216 |
| [`035`](https://projecteuler.net/problem=035) | 868ms | 134ms |      |      |      | 501 |
| [`036`](https://projecteuler.net/problem=036) | 18ms | 168ms | 86ms |      |      | 90 |
| [`037`](https://projecteuler.net/problem=037) | 188ms | 100ms |      |      |      | 144 |
| [`038`](https://projecteuler.net/problem=038) | 84ms |      | 178ms |      |      | 131 |
| [`039`](https://projecteuler.net/problem=039) | 22ms |      | 98ms |      |      | 60 |
| [`040`](https://projecteuler.net/problem=040) | 18ms | 12ms | 70ms |      |      | 33 |
| [`041`](https://projecteuler.net/problem=041) | 506ms | 218ms |      |      |      | 362 |
| [`042`](https://projecteuler.net/problem=042) | 22ms |      | 82ms |      |      | 52 |
| [`043`](https://projecteuler.net/problem=043) | 20ms | 12ms | 72ms |      |      | 34 |
| [`044`](https://projecteuler.net/problem=044) |      | 40ms |      |      |      | 40 |
| [`045`](https://projecteuler.net/problem=045) | 22ms | 12ms | 92ms | 70ms | 112ms | 61 |
| [`046`](https://projecteuler.net/problem=046) | 38ms | 16ms |      |      |      | 27 |
| [`048`](https://projecteuler.net/problem=048) | 68ms | 24ms | 80ms |      |      | 57 |
| [`049`](https://projecteuler.net/problem=049) |      | 242ms |      |      |      | 242 |
| [`050`](https://projecteuler.net/problem=050) |      | 16ms |      |      |      | 16 |
| [`052`](https://projecteuler.net/problem=052) | 124ms | 62ms | 300ms |      |      | 162 |
| *count* | 47 | 40 | 39 | 16 | 16 | 31 |
| *average* | 109 | 78 | 165 | 78 | 355 | 157 |

</details>

## Other Repositories

There are some other people putting their solutions to project euler problems
online, kudos to them because they have solved far more problems than I have:

  - [mathblog.dk](http://www.mathblog.dk/project-euler-solutions/), solutions
    are in C#
  - [project nayuki](https://www.nayuki.io/page/project-euler-solutions),
    solutions are in Java, Python, Mathematica and Haskell
  - [haskell wiki](https://wiki.haskell.org/Euler_problems), solutions are in
    Haskell

These are useful to compare against after having solved a problem, to check if
there is a more elegant or efficient method.

## Planned Languages:

  - [chez scheme](https://github.com/cisco/ChezScheme), because I never really
    worked with a scheme before and it's reportedly very fast.
  - [ocaml](https://github.com/ocaml/ocaml) because I keep hearing about it in
    unexpected places and it got me curious.
  - [nodejs](https://github.com/nodejs/node) because all the cool kids are doing
    it and my javascript is quite rusty.
  - [java9](https://www.oracle.com/java/java9.html) because that's what most
    people worldwide speak and while I'm really not a fan of java, they did add
    some features that make it interesting.
  - [haskell](https://www.haskell.org), because it's just been on my to do list
    for too long.
  - [risc5asm](https://rv8.io), because well you need to have done some assembly
    to be able to call yourself a 'real' programmer, and x86 assembler is too
    ordinaire for me and MIPS stopped being interesting 20 years ago.
  - [cpp](http://clang.org), because I haven't really gotten around to playing
    with C++14 and it could be okay.
  - [swift](https://github.com/apple/swift), because it's seems cool even though
    it's from a major company and not some academic tech hippies. it might even
    be useful..

Verdict: there are far too many dope programming languages out there. I will try
my luck with these few, but whichever I choose, there will be ten others just as
great.
