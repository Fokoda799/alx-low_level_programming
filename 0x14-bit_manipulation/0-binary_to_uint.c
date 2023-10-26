#include "main.h"

/**
 * binary_to_uint - unction that converts a binary number to
 * an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, sum = 0, pow = 1;
	int i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = len - 1; i >= 0 ; i--)
	{
		if (b[i] == '1')
		{
			sum += pow;
			pow *= 2;
		}
		else if (b[i] == '0')
			pow *= 2;
		else
			return (0);

	}
	return (sum);
}
