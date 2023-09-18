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
int i;
 
for (i = len; i >= 0;i--)
{
r[len - i] = s[i - 1];
}
r[len] = '\0';
printf("%s", r);
}
