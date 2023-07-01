CC = gcc
NAME = program

all: addDemo.o add.o sub.o
	$(CC) -o $(NAME) addDemo.o add.o sub.o

addDemo.o: ../addDemo.c
	$(CC) -c ../addDemo.c

add.o: ../add.c
	$(CC) -c ../add.c

sub.o: ../sub.c
	$(CC) -c ../sub.c

clean:
	rm -f *.o
	rm -f $(NAME)
