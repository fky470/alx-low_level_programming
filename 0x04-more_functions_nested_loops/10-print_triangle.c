#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: takes in an integer
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j >= size - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
