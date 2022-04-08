#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: return pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}
	else if (p == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		p = malloc(new_size);
		if (p)
		{
			memcpy(p, ptr, old_size);
			free(ptr);
		}
		return (p);
	}
}
