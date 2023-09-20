#include "main.h"

/**
* _strncat - function that concatenates two strings.
* @dest - type char pointer.
* @src - type char pointer.
* @n - number of elements to concatenate in
*Return: pointer to resulting 'dest'.
*/
char *_strncat(char *dest, char *src, int n)    
{
        int len, i;

        for (len = 0; dest[len] != '\0'; len++) 
                ;

        for (i = 0; i < n && src[i] != '\0'; i++) 
                dest[len + i] = src[i];
        dest[len + i] = '\0';

        return (dest);
}
