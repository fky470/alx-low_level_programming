#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @n: an integer
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
}
