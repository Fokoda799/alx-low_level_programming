#include "function_pointers.h"
#include <stdlib.h>

/** 
 * array_iterator - prints each array elem on a newl 
 * @array: array 
 * @size: how many elem to print 
 * @action: pointer to print in regular or hex 
 * Return: void 
 * 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array == NULL || action == NULL || size < 1)
    {
        return;
    }

    while (size-- > 0)
    {
        action(*array);
        array++;
    }
}