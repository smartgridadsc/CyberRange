DIRS = $(wildcard ied*/)

all: ieds

ieds:  
	-for dir in $(DIRS); do (cd $$dir && $(MAKE)); done

.PHONY: ieds
