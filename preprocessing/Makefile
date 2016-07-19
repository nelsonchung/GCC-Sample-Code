all: preprocessing compilation
	#gcc main.c

preprocessing:
	gcc -E main.c -o hello.i

compilation:
	gcc -S hello.i -o hello.s
