#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: int number
 * @m: int number
 * Return: the converted number, or 0.
 */
unsigned int flip_bits(unsigned long int n,
unsigned long int m)
{
	unsigned int b, c = 0;
	unsigned long int mask;

	mask = n ^ m;
	b = 1 & mask;
	while (mask != 0)
	{
		if (b == 1)
		{
			c++;
		}
		mask = mask >> 1;
		b = 1 & mask;
	}
	return (c);
}
