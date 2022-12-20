CFLAGS=-Wall -Wextra -pedantic -std=c11 -O2 -g
export

.PHONY: build clean src test

build: src

test: src
	$(MAKE) -C test/
	./build/test

src:
	$(MAKE) -C src/

clean:
	rm -rf build/
