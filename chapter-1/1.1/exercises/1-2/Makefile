# Exercise 1-2
src = $(wildcard src/*.c)
obj = $(src:.c=.o)

ROOTDIR = ../../../..

LDFLAGS = -lz

1-2: $(obj)
	$(CC) -o bin/$@ $^ $(LDFLAGS)
	@ln -sf $(CURDIR)/bin/$@ $(ROOTDIR)/bin/$@

.PHONY: clean
clean:
	rm -f $(obj) 1-2
