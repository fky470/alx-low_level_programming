#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, i;

	for (d = 48; d <= 56; d++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (d < i)
			{
				putchar(d);
				putchar(i);
				if (d >= 56 && i >= 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
