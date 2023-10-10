#include <stdio.h>
#include "dog.h"

/**
* *new_dog - new_dog.
* @name: name of the dog.
* @age: age of dog.
* @owner: owner of the dog.
* Return: 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (d != NULL)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

