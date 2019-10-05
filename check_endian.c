#include <stdio.h>

union end
{
	int a;
	char b;
};

void main()
{
	union end data;
	data.a = 1;
	if (data.b == 0)
	{
		printf("Big Endianess");
	}
	else
		printf("Little Endianess");
}

// a = 0001
// b = 1 then little endian (MSB first)