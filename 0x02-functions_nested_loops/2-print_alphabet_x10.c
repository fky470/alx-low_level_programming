#include "main.h"

/**
 * main - print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int d;
	
	for (d = 0; d < 10; d++)
	{
		int c;
		
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
