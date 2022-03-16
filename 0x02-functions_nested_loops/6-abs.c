#include "main.h"

/**
 *  _abs - function that prints the absolute value of a number
 *  @n - takes in an integer
 *  return - + if n < 0, - if n > 0, 0 if n = 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
