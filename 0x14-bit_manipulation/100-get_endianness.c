#include "main.h"

/**
 * get_endianness -  function that returns the number.
 *
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	if (*endianCheck == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
