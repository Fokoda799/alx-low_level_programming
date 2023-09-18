#include <stdio.h>
#include "main.h"

/*
 * swap_int - Function that swaps the values of two integers.
 * @a: type int pointer
 * @b: type int pointer
 * description: Swaps the values.
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}
