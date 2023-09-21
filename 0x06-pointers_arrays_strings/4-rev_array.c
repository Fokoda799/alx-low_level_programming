#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n - 1)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		i++;
		n -= 2;
	}
}
