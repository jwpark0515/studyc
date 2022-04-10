basicArith.o : basicArith.h basicArith.c
	clang -c basicArith.c

areaArith.o : areaArith.h areaArith.c
	clang -c areaArith.c

roundArith.o : roundArith.h roundArith.c
	clang -c roundArith.c

main.o : main.c areaArith.h roundArith.h
	clang -c main.c 

main : main.o basicArith.o areaArith.o roundArith.o
	clang main.o basicArith.o areaArith.o roundArith.o -o main

clean:
	rm -f main main.o basicArith.o areaArith.o roundArith.o