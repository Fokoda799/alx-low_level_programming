#include "main.h"

/**
* _strncpy - function that copies a string.
* @dest: type char pointer.
* @src: type char pointer.
* @n: number of element to copies.
* Return: pointer to resulting 'dest'.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
