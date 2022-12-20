export

BUILD=../build/
TEST_BUILD=../build/test/

TEST_DEPENDENCIES=${TEST_BUILD}test_stack.o ${TEST_BUILD}test_queue.o ${TEST_BUILD}test_binomial_heap.o
DEPENDENCIES=${BUILD}/stack/stack.o ${BUILD}/queue/queue.o ${BUILD}/binomial_heap/binomial_heap.o ${BUILD}/binomial_heap/bh_free.o

.PHONY: all stack queue binomial_heap

all: stack queue binomial_heap
	${CC} -o ${TEST_BUILD}test test.c ${TEST_DEPENDENCIES} ${DEPENDENCIES} ${CFLAGS}

stack: ${TEST_BUILD}
	$(MAKE) -C stack/

queue: ${TEST_BUILD}
	$(MAKE) -C queue/

binomial_heap: ${TEST_BUILD}
	$(MAKE) -C binomial_heap/

${TEST_BUILD}:
	mkdir -p ${TEST_BUILD}
