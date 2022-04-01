#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: the string
 * @s2: the string
 * Return: return  0
 */

int _strcmp(char *s1, char *s2)
{
	int i, R;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}

	}
	R = s1[i] - s2[i];

	return (R);
}
