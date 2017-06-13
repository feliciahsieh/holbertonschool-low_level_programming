#include <stdlib.h>
#include <ctype.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog to free
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
