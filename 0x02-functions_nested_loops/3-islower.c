#include "main.h"

/**
 *  _islower - Returns 1 if lowercase alphabet Returns 0 otherwise
 * @c: takes in a character
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
