CC=gcc
CFLAGS="-m32 -fno-stack-protector -z execstack -g"

all: out
	$(MAKE) -C src/ch03 CC=$(CC) CFLAGS=$(CFLAGS) OUT=bin

out:
	@mkdir -p bin

clean:
	$(MAKE) -C src/ch03 clean
	find . -name "*~" -exec rm {} \;
	rm -rf bin
