export

TEST_DEPENDENCIES=../build/test_stack.o ../build/test_queue.o
DEPENDENCIES=../build/stack.o ../build/queue.o

.PHONY: all stack queue

all: stack queue
	${CC} -o ../build/test test.c ${TEST_DEPENDENCIES} ${DEPENDENCIES} ${CFLAGS}

stack:
	$(MAKE) -C stack/

queue:
	$(MAKE) -C queue/
