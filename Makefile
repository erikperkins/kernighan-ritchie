# Root Makefile
SUBDIRS = $(shell ls -d */)

all:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) -C $$dir ; \
	done

exercises:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) exercises -C $$dir ; \
	done

samples:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) samples -C $$dir ; \
	done
