#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z, d;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (((z + d) > (x + y) && z >= x) || x < z)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(d);
						
						if (x + y + z + d == 227 && x == 57)
						{
							break;
						}
						
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
