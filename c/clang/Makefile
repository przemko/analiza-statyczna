CC=clang
CFLAGS=-Wall --pedantic -std=c11
LDFLAGS=-lm

PROGS=ex1 ex2 ex3

all: $(PROGS)

analiza:
	clang --analyze *.c

clean:
	rm -f $(PROGS) *.o *.plist *~

