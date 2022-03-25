#include "main.h"

/**
 * *leet -  function that encodes a string into 1337
 * @s: a string
 * Return: return s value
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i >= 'a' && i <= 'z')
		{
			if (s[i] == 'a')
			{
				s[i] = '4';
			}
			else if (s[i] == 'e')
			{
				s[i] = '3';
			}
			else if (s[i] == 'o')
			{
				s[i] = '0';
			}
			else if (s[i] == 't')
			{
				s[i] = '7';
			}
			else if (s[i] == 'l')
			{
				s[i] = '1';
			}
		}
		else
		{
			if (s[i] == 'A')
			{
				s[i] = '4';
			}
			else if (s[i] == 'E')
			{
				s[i] = '3';
			}
			else if (s[i] == 'O')
			{
				s[i] = '0';
			}
			else if (s[i] == 'T')
			{
				s[i] = '7';
			}
			else if (s[i] == 'L')
			{
				s[i] = '1';
			}
		}
		return (s);
	}
}