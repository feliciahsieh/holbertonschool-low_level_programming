#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: dog owner's name
 * Return: pointer to a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog *pup = malloc(sizeof(dog));

	if (pup == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	pup->name = malloc((i + 1) * sizeof(char));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		pup->name[j] = name[j];
	pup->name[j] = '\0';

	if (age > 0.0)
		pup->age = age;
	else
		return (NULL);

	for (i = 0; owner[i]; i++)
		;
	pup->owner = malloc((i + 1) * sizeof(char));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		pup->owner[j] = owner[j];
	pup->owner[j] = '\0';

	return (pup);
}
