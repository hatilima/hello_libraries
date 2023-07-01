#include<stdio.h>
#include"mathlib.h"

int main()
{
	int x=10, y=20;
	printf("\nThis example demonstrates linking several files.");
	printf("\n###############################################");
	printf("\nThis is from the addition source file, add.c:");
	printf("\n%d + %d = %d \n", x, y, add(x, y));
	printf("\nThis is from the subtraction source file, sub.c:");
	printf("\n%d - %d = %d \n", y, x, sub(y, x));
	return 0;
}
