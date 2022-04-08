#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: an integer
 * @max: an integer
 * Return: return a pointer
 */

int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
