#include "main.h"

/**
* strcmp - function that compares two strings.
* @s1: type char pointer
* @s2: type char pointer
* Return: an integer indicating the result of the comparison.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;

	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	else
		return (0);
}
