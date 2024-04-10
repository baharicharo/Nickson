hotel:main.o function.o
	gcc -o hotel main.o function.o

main.o:main.c function.h
	gcc -c main.c

function.o:function.c function.h
	gcc -c function.c

clean:
	rm hotel *.o
