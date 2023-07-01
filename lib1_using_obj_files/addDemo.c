#include<stdio.h>
#include"add.h"

int main()
{
	int x=10, y=20;
	printf("The following demonstration is about linking several files");
	printf("\n%d + %d = %d \n", x, y, add(x, y));
	return 0;
}
