#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: a string
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
