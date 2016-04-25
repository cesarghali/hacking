all:
	gcc -m32 -fno-stack-protector -z execstack -g auth_overflow.c -o auth_overflow
	gcc -m32 -g exploit_auth_overflow.c -o exploit_auth_overflow

clean:
	rm -f *~
	rm -f auth_overflow
	rm -f exploit_auth_overflow
