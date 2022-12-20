export

TEST_DEPENDENCIES=../build/test_stack.o
DEPENDENCIES=../build/stack.o

.PHONY: all stack

all: stack
	${CC} -o ../build/test test.c ${TEST_DEPENDENCIES} ${DEPENDENCIES} ${CFLAGS}

stack:
	$(MAKE) -C stack/
