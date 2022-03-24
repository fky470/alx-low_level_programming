#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the string
 * @s2: the string
 * Return: return  0 if s1 and s2 are equal a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, R;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}

	}
	R = s1[i] - s2[i];

	return (R);
}
