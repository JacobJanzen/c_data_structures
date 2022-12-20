export

BUILD_DIR=../build/

STACK=${BUILD_DIR}stack/stack.o
QUEUE=${BUILD_DIR}queue/queue.o

STATIC_RESULT=${BUILD_DIR}cds.a
SHARED_RESULT=${BUILD_DIR}libcds.so

DEPS=${STACK} ${QUEUE}

.PHONY: all

all: ${STATIC_RESULT} ${SHARED_RESULT}

${STATIC_RESULT}: ${DEPS}
	ar r ${STATIC_RESULT} ${DEPS}

${SHARED_RESULT}: ${DEPS}
	clang -shared -o ${SHARED_RESULT} ${DEPS}

${STACK}:
	$(MAKE) -C stack/

${QUEUE}:
	$(MAKE) -C queue/
