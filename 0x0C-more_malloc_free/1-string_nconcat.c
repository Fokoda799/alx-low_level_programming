#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	int i;

	for (len = 0; *(s1 + len1) != '\0'; len++)
		;
	for (len = 0; *(s2 + len2) != '\0'; len++)
                ;
	if (n >= len2)
	{
		*s1 = malloc(len1 + len2);
        	if (*s1 == NULL)
                	return (NULL);
		for (i = 0; i < len2; i++)
                	*(s1 + len + i) = *(s + i);
	else
	{

		*s1 = malloc(len1 + n);
		if (*s1 == NULL)
			return (NULL);
		for (i = 0; i < n; i++)
			*(s1 + len + i) = *(s + i);
	return (s1);
}


