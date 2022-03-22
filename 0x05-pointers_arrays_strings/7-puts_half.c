#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i / 1 > 4)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
