#include "dog.h"

/**
 * init_dog - initialize values for members of a struct
 *
 * @struct dog *d: address to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
