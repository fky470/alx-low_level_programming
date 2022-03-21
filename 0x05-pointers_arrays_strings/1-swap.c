#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: parameter to take value
 * @b: parameter to take value
 * @x: takes in an integer
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
