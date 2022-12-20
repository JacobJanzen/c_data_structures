.PHONY: all

BUILD_DIR=../../build/queue/

all: ${BUILD_DIR}queue.o

${BUILD_DIR}queue.o: queue.c ${BUILD_DIR}
	${CC} -c -o ${BUILD_DIR}queue.o queue.c ${CFLAGS}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}
