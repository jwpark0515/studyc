main.o : main.c
	clang -c main.c

num.o : num.o
	clang -c num.c

func.o : func.o
	clang -c func.c

main : main.o num.o func.o
	clang main.o num.o func.o -o main

clean:
	rm -f main.o num.o func.o main