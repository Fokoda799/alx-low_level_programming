#include 'main.h'

/**
* _strcat - function that concatenates two strings.
* @dest - type char pointer.
* @src - type char pointer.
* @n - type int
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len]; len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return dest;
}
