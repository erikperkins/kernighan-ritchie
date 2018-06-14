# 1.1 Samples
SUBDIRS = $(shell ls -d */)

all:
	for dir in $(SUBDIRS) ; do \
		$(MAKE) -C $$dir ; \
	done
