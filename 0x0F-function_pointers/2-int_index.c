#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: size of an array
 * @cmp: function pointer
 * Return: index of first element that
 * matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
