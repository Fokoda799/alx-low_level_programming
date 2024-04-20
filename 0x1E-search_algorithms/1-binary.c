#include "search_algos.h"

/**
* binary_search - function that searches for a value in
* an array of integers using the Binary search algorithm
* @array: a pointer to the first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: first index for sucess, -1 for faluir
*/
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;
	size_t i;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		m = (L + R) / 2;

		/* printing the array being searched */
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			return (m);
		}
	}

	return (-1);
}
