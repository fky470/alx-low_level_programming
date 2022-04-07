#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: unsigned integer
 * Return: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b * sizeof(int));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
