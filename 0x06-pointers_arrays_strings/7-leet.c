#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: input
 * Return: return string
 */

char *leet(char *s)
{
	int i, j;
	char x[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = x[j + 1];
				break;
			}
		}
	}
	return (s);
}
