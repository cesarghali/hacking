all:
	$(MAKE) -C ch03

clean:
	rm -f *~
	$(MAKE) -C ch03 clean
