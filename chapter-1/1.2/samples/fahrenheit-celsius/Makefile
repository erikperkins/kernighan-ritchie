# Fahrenheit to Celsius example
src = $(wildcard src/*.c)
obj = $(src:.c=.o)

ROOTDIR = ../../../..

LDFLAGS = -lz

fahrenheit-celsius: $(obj)
	$(CC) -o bin/$@ $^ $(LDFLAGS)
	@ln -sf $(CURDIR)/bin/$@ $(ROOTDIR)/bin/$@

.PHONY: clean
clean:
	rm -f $(obj) fahrenheit-celsius
