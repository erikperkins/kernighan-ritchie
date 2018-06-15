# Exercise 1-3
src = $(wildcard src/*.c)
obj = $(src:.c=.o)

ROOTDIR = ../../../..

LDFLAGS = -lz

1-3: $(src)
	$(CC) -o bin/$@ $^ $(LDFLAGS)
	@ln -sf $(CURDIR)/bin/$@ $(ROOTDIR)/bin/$@

.PHONY: clean
clean:
	rm -f $(obj) 1-3
