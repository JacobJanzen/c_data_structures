.PHONY: all

BUILD_DIR=../../build/queue/
DEPS=

RESULT=${BUILD_DIR}queue.o

all: ${RESULT}

${RESULT}: queue.c ${DEPS} ${BUILD_DIR}
	${CC} -c -o ${RESULT} queue.c ${CFLAGS}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}
