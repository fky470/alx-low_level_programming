#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of an array
 * @c: initialized characcter
 * Return: return a pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	p = malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
