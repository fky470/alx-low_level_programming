#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j >= i / 2 && j >= i / 2 + 1)
			{
				_putchar(str[j]);
			}
		}
		_putchar('\n');
	}
}
