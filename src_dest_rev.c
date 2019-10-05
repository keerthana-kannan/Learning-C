#include <stdio.h>

void main()
{
	char a[5] = "AKH";
//  int a[5] = {1,2,3};
//  char a[5] = {'a','b','c'};

	char b[5];
	int i;
	
	//To generalize get input for n or n = sizeof(a);
	
	/*printf("Enter 3 element array: ");
	for (i=0;i<3;i++)
	{
		scanf("%d", &a[i]);
	}*/
	
	for (i=0;i<3;i++)
	{
		b[2-i] = a[i]; //b[(n-1)-i] = a[i];
	}
	
	printf("Destination: ");
	for (i=0;i<3;i++)
	{
		printf("%c \t", b[i]);
	}
}