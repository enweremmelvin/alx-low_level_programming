#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - create a new dog of return value dog_t
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	(void) age;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->owner = owner;

	return (new_dog);
}
