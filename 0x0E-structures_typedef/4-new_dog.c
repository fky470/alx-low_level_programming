#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *d;

	i = 0;
	while (name[i] != '\0')
		i++;

	j = 0;
	while (name[j] != '\0')
		j++;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(d->name) * i);

	if (d->name == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		d->name[k] = name[k];
	d->age = age;

	d->owner = malloc(sizeof(d->owner) * j);

	if (d->owner == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
		d->owner[k] = owner[k];

	return (d);
}