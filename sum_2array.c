#include <stdio.h>

void main()
{
	int a[100];
	int b[100];
	int sum[100];
	int i,n;
	
	printf("Enter length of arrays: \n");
	scanf("%d", &n);
	
	printf("Enter array1: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter array2: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum[i] = a[i]+b[i];
	}
	
	printf("The sum of the 2 arrays are: \n");
	for (i=0;i<n;i++)
	{
		printf("%d \n", sum[i]);
	}
}