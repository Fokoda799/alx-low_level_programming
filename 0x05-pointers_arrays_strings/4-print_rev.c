#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - Print a string, in reverse, followed by a new line.
 * @s: type char pointer
 *Return: 0.
 */
void print_rev(char *s)
{
int len = strlen(s);
char let;
int i;
for (i = len; i >= 0;i--)
{
let = s[i - 1];
_putchar(let);
}
_putchar("\n");
}
