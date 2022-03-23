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
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (i < j)
			{
				return (i - j);
				break;
			}
			else if (i > j)
			{
				return (j - i);
				break;
			}
			else
			{
				return (0);
				break;
			}
		}
	}
}
