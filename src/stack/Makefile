.PHONY: all

all: ../../build/stack.o

../../build/stack.o: stack.c ../../build
	${CC} -c -o ../../build/stack.o stack.c ${CFLAGS}

../../build:
	mkdir -p ../../build
