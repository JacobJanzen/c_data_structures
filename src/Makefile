export

.PHONY: all stack queue

all: stack queue ../build

stack:
	$(MAKE) -C stack/

queue:
	$(MAKE) -C queue/

../build:
	mkdir -p ../build
