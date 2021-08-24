# My first makefile

all: presgresql

presgresql: main.o input_buffer.o
	gcc -o presgresql main.o input_buffer.o

main.o: main.c input_buffer.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

helloWorld.o: input_buffer.c input_buffer.h
	gcc -o input_buffer.o input_buffer.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ presgresql