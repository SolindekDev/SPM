all: main.c
	gcc main.c -lcurl
	./a.out
