#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: the string
 */

void _puts_recursion(char *s)
{
	char i;

	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		*s = i;
	}
}
