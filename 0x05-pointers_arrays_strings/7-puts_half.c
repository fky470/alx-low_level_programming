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
	{
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		j = str[i];
		_putchar(j);
	}
	}
}
