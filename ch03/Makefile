all:
	gcc -m32 -fno-stack-protector -z execstack -g auth_overflow.c -o auth_overflow
	gcc -m32 -fno-stack-protector -z execstack -g auth_overflow2.c -o auth_overflow2
	gcc -m32 -g exploit_auth_overflow.c -o exploit_auth_overflow
	gcc -m32 -g exploit_auth_overflow2.c -o exploit_auth_overflow2

clean:
	rm -f *~
	rm -f auth_overflow
	rm -f auth_overflow2
	rm -f exploit_auth_overflow
	rm -f exploit_auth_overflow2
