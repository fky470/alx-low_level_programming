#include "main.h"

/**
 * _isalpha - return 1 if lowercase and uppercase character otherwise return 0
 *@c: takes in a character
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
