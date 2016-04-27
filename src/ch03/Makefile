SOURCES=$(wildcard *.c)
EXECS=$(patsubst %.c, %, $(SOURCES))

all: $(EXECS)

$(EXECS): % : %.c
	$(CC) $(CFLAGS) $< -o ../../$(OUT)/$@

clean:
	find . -name "*~" -exec rm {} \;
