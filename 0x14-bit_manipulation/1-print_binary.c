#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask, array = 0, d = 1;

	while (n != 0)
	{
		mask = n & 1;
		array = array + (mask * d);
		d = d * 10;
		n = n >> 1;
	}
	printf("%ld", array);
}
