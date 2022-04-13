#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints elements of an array
 * @array: an array of integers
 * @size: size of an array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
