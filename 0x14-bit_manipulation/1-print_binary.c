#include "main.h"

/**
 * print_binary -  function that returns the number.
 * @n: int number
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask <= n)
		mask <<= 1;
	mask >>= 1;

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
