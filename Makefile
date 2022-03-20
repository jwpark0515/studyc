main.o : ch21/main.c
	clang -c ch21/main.c
s
main : ch21/main.o
	clang  ch21/main.o -o main

clean:
	rm -f ch21/main.o main