#include<stdio.h>
#include "dog.h"

/**
* print_dog - print_dog
* @d : struct dog argement.
* Return : 0.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("nil\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("nil\n");
		else
			printf("Name: %f\n", d->age);

		if (d->owner == NULL)
			printf("nil\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
