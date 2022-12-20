.PHONY: all

BUILD_DIR=../../build/binomial_heap/

all: ${BUILD_DIR}binomial_heap.o ${BUILD_DIR}bh_free.o

${BUILD_DIR}binomial_heap.o: binomial_heap.c ${BUILD_DIR}
	${CC} -c -o ${BUILD_DIR}binomial_heap.o binomial_heap.c ${CFLAGS}

${BUILD_DIR}bh_free.o: bh_free.c ${BUILD_DIR}
	${CC} -c -o ${BUILD_DIR}bh_free.o bh_free.c ${CFLAGS}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}
