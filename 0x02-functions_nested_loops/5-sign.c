#include "main.h"

/**
 * print_sign - print sign of a number
 *@n: takes in number
 * Return: return 1 if n > 0, return 0 if n = 0, return -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
