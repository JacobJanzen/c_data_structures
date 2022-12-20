export

BUILD=../build/
TEST_BUILD=../build/test/

STACK=${TEST_BUILD}test_stack.o
QUEUE=${TEST_BUILD}test_queue.o

DEPS=${STACK} ${QUEUE}
LIBS=${BUILD}cds.a

RESULT=${TEST_BUILD}test

.PHONY: all

all: ${RESULT}

${RESULT}: ${DEPS}
	${CC} -o ${TEST_BUILD}test test.c ${DEPS} ${LIBS} ${CFLAGS}

${STACK}: ${TEST_BUILD}
	$(MAKE) -C stack/

${QUEUE}: ${TEST_BUILD}
	$(MAKE) -C queue/

${TEST_BUILD}:
	mkdir -p ${TEST_BUILD}
