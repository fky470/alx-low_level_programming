#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: size of bytes for each elements
 * Return: a char pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
