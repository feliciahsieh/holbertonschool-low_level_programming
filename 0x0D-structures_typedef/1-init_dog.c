#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog data structure
 * @d: pointer to specific dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name)
		d->name = name;
	if (age > 0)
		d->age = age;
	if (owner)
		d->owner = owner;
}
