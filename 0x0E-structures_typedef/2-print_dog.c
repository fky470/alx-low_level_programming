#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog data
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name = %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age = %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner = %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
	if (d == NULL)
		return;
}