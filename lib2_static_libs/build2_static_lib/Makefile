CC = gcc
NAME = program

all: addDemo.o add.o sub.o
	ar rs libmath_static_lib.a add.o sub.o
	$(CC) -o $(NAME) addDemo.o libmath_static_lib.a

addDemo.o: ../addDemo.c
	$(CC) -c ../addDemo.c

add.o: ../add.c
	$(CC) -c ../add.c

sub.o: ../sub.c
	$(CC) -c ../sub.c


clean:
	rm -f *.o
	rm -f $(NAME)
	rm -f *.a
