#include <stdio.h>
#include <string.h>
#include 'main.h'

/**
* _strcat - Concatenates two strings.
* @dest - type char pointer
* @src - type char pounter
* Return: pointer dest
*/ 
char *_strcat(char *dest, char *src)
{
int n = strlen(dest) + strlen(src);
int i;
for (i = 0;i < n; i++)
{
dest[n + i] = src[i];
}
dest[n + i] = '\0';
return dest;
}

