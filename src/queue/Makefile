.PHONY: all

all: ../../build/queue.o

../../build/queue.o: queue.c ../../build
	${CC} -c -o ../../build/queue.o queue.c ${CFLAGS}

../../build:
	mkdir -p ../../build
