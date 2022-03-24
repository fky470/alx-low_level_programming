#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: a string
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i, j, x;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
