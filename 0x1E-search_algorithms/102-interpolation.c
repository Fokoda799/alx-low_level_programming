#include "search_algos.h"

/**
* interpolation_search - function that searches for a value in
* an array of integers using the interpolation search algorithm
* @array: a pointer to the first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Return: first index for sucess, -1 for faluir
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (array[high] != array[low] && value >= array[low]
		&& value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
