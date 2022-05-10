#include <stdio.h>

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 */

void print_number(int n)
{
	unsigned int p;

	p = n;

	if (n < 0)
	{
		p = -n;
		_putchar('-');
	}

	if (p / 10)
	{
		print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
