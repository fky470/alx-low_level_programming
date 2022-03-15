#include "main.h"

/**
 * main - print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int d = 0;
	
	while (d <= 10)
	{
		int c;
		
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}
