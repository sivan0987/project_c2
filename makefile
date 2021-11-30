FLAGS =-Wall -g
CC = gcc #if we want to change compiler

all: connections

connections:main.o my_mat 
	$(CC) $(FLAGS) -o connections main.o my_mat 


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_mat:my_mat.o
	ar -rcs my_mat my_mat.o 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 	


.PHONY: clean
clean:
	rm -f *.o *.a *.so connections my_mat