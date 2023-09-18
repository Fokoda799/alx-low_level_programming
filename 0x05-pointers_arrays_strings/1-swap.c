#include <stdio.h>
#include "main.h"

/*
 * swap_int - Swaps the values of two integers.
 * @a: type int pointer
 * @b: type int pointer
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}
