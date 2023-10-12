#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - Searching for index
* @array : int array.
* @size : size of array.
* @cmp : function pointer.
* Return : 0 or index
*/
int int_index(int *array, size_t size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL)
        return (1);

    int i = 0;

    while (size-- > 0)
    {
        if (cmp(array[i]))
            return (i);
        i++;
    }
    return(0);
}
