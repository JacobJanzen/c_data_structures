.PHONY: all

BUILD_DIR=../../build/stack/

all: ${BUILD_DIR}stack.o

${BUILD_DIR}stack.o: stack.c ${BUILD_DIR}
	${CC} -c -o ${BUILD_DIR}stack.o stack.c ${CFLAGS}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}
