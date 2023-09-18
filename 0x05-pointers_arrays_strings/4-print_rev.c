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
char r[len];
 
for (int i = len; i >= 0;i--)
{
r[len - i] = s[i - 1];
}
 
printf("%s", r);
}
