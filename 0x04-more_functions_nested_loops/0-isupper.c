#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: takes in an integer
 * Return: 1 if uppercase character 0 otherwise
 */

int _isupper(int c)
{
	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
