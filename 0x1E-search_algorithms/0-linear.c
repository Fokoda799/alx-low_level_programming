#include "search_algos.h"


/**
* linear_search - function that searches for a value in
* an array of integers using the Linear search algorithm
* @array: a pointer to the first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: first index for sucess, -1 for faluir
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
                        return (i);
	}

	return (-1);
}
