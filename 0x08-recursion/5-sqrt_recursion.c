#include "main.h"
#include <math.h>

/**
 * _sqrt - helping function
 * @n: an integer
 * @x: an integer
 * Return: output
 */

int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: an integer
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
