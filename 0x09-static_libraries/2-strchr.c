#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string in which the character is to be searched
 * @c: a character searched in s
 * Return: return a pointer if the character is found
 * or null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
