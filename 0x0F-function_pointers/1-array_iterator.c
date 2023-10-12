#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - unction that executes a function.
* @array : int array.
* @size : size of array.
* @action : function pointer.
* Return : Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
  if (action == NULL || array == NULL)
    return;

  size_t i;

  for (i = 0; i < size; i++)
  {
    action(array[i]);
  }
}
