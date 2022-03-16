#include "main.h"

/**
 * times_table - fuction that prints the 9 times table starting from 0
 * @void - no argument
 */

void times_table(void)
{
	int x, y, n;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			n = x * y;

			if (y == 0)
			{
				_putchar(n + '0');
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
