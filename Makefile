main.o : ch27/main.c
	clang -c ch27/main.c

main : ch27/main.o
	clang  ch27/main.o -o main

clean:
	rm -f ch27/main.o main