#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all memory allocated to structs
 *
 * @d: pointer to struct
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
