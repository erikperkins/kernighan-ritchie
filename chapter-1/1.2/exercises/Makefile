# 1.2 Exercises
SUBDIRS = $(shell ls -d */)

all:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) -C $$dir ; \
	done
