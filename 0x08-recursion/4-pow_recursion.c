#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: an integer
 * @y: an integer
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y >= 1)
	{
		return (_pow_recursion(x, y-1) * x);
	}
	else
	{
		return (-1);
	}
}
