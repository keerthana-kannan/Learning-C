#include <stdio.h>

void main()
{
	int x = 1;
	float y = 1;
	char z = 'a';
	int *a;
	a=&x;
	float *b;
	b=&y;
	char *c;
	c=&z;
	printf("Size of int* is: %d bytes\n", sizeof(*a));
	printf("Size of float* is: %d bytes\n", sizeof(*b));
	printf("Size of char* is: %d bytes\n", sizeof(*c));
	
	printf("Data stored in int* : %d \n", *a);
	printf("Data stored in float* : %f \n", *b);
	printf("Data stored in char* : %c \n", *c);
}
//Any type of pointer variable takes the same memory bytes in the memory,
// because they are used to store the memory addresses on other type of variables.