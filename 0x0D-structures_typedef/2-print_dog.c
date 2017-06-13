#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog data struct
 * @d: pointer to dog data structure
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("TESTNAME: %s", d->name);

		if (d->name[0])
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("Age: %.6f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
	else
	{
		return;
	}
}
