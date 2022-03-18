#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
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
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
