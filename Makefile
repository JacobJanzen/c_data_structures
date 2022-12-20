CFLAGS=-Wall -Wextra -pedantic -std=c11 -O2 -g -fPIC
export

.PHONY: build clean src test

build: src

test: src
	$(MAKE) -C test/
	./build/test/test

src:
	$(MAKE) -C src/

clean:
	rm -rf build/
