#include "main.h"
/**
 * print_alphabet - check the code for Holberton School students
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int d;

	for (d = 97; d <= 122; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
	return (0);
}
