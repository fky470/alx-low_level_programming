#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n : takes in an integer
 */

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n > 0)
		{
			_putchar('-');
		}

	}
	_putchar('\n');
}
