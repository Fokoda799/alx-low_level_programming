#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
* @d : the main struct of the dog.
* @name : the name of the dog.
* @age : the age of the dog.
* @owner : the owner of the dog.
* Return : 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}


