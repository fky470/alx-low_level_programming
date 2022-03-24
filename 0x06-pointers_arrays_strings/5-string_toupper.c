#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: character to make upper
 *
 * Return: return value of upper
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	
	return (s);
}
