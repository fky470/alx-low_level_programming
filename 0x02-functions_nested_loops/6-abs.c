#include "main.h"

/**
 * _abs - print absolute value of an integer
 * @n: takes an integer 
 * Return: return - if n > 0, return 0 if n = 0, return + if n < 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
