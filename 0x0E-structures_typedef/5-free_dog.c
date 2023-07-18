#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory location of dog
 * @d: pointer to the memory
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
