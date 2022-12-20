CFLAGS=-Wall -Wextra -pedantic -std=c11 -O2 -g
export

.PHONY: clean src test

test: src
	$(MAKE) -C test/
	./build/test

src:
	$(MAKE) -C src/

clean:
	rm -rf build/
