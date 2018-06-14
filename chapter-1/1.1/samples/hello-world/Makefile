# hello-world
src = $(wildcard src/*.c)
obj = $(src:.c=.o)

ROOTDIR = ../../../..

LDFLAGS = -lz

hello-world: $(obj)
	$(CC) -o bin/$@ $^ $(LDFLAGS)
	@ln -sf $(CURDIR)/bin/$@ $(ROOTDIR)/bin/$@

.PHONY: clean
clean:
	rm -f $(obj) hello-world
