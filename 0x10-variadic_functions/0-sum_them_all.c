#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant unsigned integer
 * Return: return sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start (args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(args, unsigned int);
	}

	va_end (args);

	return (sum);
}
