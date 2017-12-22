# Exercises and Examples for "The C Programming Language", Kernighan and Ritchie.
Examples and exercises each occupy their own directories, according to chapter
and section
```
chapter-1/1.1/examples/hello-world/
```
In each such directory, the structure is
```
bin/
src/
out/
Makefile
```
Makefiles can be called recursively from each level - all examples and exercises
can be built at once by calling `make` from the project root. Examples and
exercises can be built separately with `make samples` and `make exercises`,
respectively.
