.PHONY: all

BUILD_DIR=../../build/stack/
DEPS=

RESULT=${BUILD_DIR}stack.o

all: ${RESULT}

${RESULT}: ${DEPS} ${BUILD_DIR}
	${CC} -c -o ${RESULT} stack.c ${CFLAGS}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}
