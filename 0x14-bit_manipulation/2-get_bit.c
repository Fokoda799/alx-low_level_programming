#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: int number
 * @index: the index, starting from 0 of the bit
 * Return: the converted number, or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;
	bit &= 1;
	return (bit);
}
