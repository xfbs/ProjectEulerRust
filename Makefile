include global.mk
PROBLEMS	= all
LANGUAGES	= all
BUNDLE		= bundle
MKDIR		= mkdir -p
RUBY		= ruby

# export all variables
export

build: setup
	cd $(SOLUTIONDIR) && $(MAKE) $@

setup:
	#$(MKDIR) $(CACHEDIR)

clean:
	cd $(SOLUTIONDIR) && $(MAKE) $@
	$(RM) $(CACHEDIR)

setup-checker: setup
	@cd $(CHECKERDIR) && $(BUNDLE) install

check: setup build
	@cd $(CHECKERDIR) && $(BUNDLE) exec exe/check

.PHONY: build setup setup-checker clean check
