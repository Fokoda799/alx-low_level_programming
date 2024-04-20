#include "search_algos.h"

/**
* jump_search - function that searches for a value in
* an array of integers using the Jump search algorithm
* @array: a pointer to the first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: first index for sucess, -1 for faluir
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump_size = 0;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (; jump_size < size && array[jump_size] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_size, array[jump_size]);
		i = jump_size;
		jump_size += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump_size);

	jump_size = fmin(jump_size, size - 1);

	for (; i < jump_size && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
