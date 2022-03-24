#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: a string
 * Return: return s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else if (s[i] == ' ')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] = s[i] + 32;
				continue;
			}
		}
	}
	return (s);
}
