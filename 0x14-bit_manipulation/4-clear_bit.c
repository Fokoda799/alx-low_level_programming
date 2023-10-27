#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 1 at a given index.
 * @index:  the index, starting from 0 of the bit
 * @n: int number
 * Return: the converted number, or 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int pos;

	if (index > 64)
		return (-1);

	pos = ~(1 << index);
	*n &= pos;

	return (1);
}
