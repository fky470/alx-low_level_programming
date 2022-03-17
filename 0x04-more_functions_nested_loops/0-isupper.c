#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: takes in an integer
 * Return: 1 if uppercase character 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
