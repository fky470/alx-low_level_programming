#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: an integer
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	double x;
	x = 0.5;
	if (n == 0)
	{
		return (0);
	}
	else if (n >= 1)
	{
		return (pow(n, x));
	}
	else
	{
		return (-1);
	}
}
