#include <stdio.h>

void swap (int *pa, int *pb)
{
	int temp = *pa; //5
	*pa = *pb; //10
	*pb = temp; //5
}

void main()
{
	int a=5, b=10;
	printf("Before swapping: %d %d \n",a,b);
	swap(&a,&b);
	printf("After swapping: %d %d",a,b);
}






















