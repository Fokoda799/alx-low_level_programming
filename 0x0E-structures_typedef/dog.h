#ifndef DOG_H
#define DOG_H

/**
* struct dog - The dog info.
* @name: dog name.
* @age: Age of the dog.
* @owner: The owner of the dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
