# Section 1.2
SUBDIRS = $(shell ls -d */)
EXERCISES = $(shell ls -d exercises/)
SAMPLES = $(shell ls -d samples/)

all:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) -C $$dir ; \
	done

.PHONY: all
all: exercises samples

.PHONY: exercises
exercises:
	for dir in $(EXERCISES) ; do \
		$(MAKE) -C $$dir ; \
	done

.PHONY: samples
samples:
	for dir in $(SAMPLES) ; do \
		$(MAKE) -C $$dir ; \
	done
