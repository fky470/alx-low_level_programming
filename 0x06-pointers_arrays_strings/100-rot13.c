#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: the string
 * Return: char value
 */

char *rot13(char *s)
{
	int i, j;
	char x[] = "NANOBOPCPQDQRERSFSTGTUHUVIVWJWXKXYLYZMZnanobopcpqdqrersfstgtuhuvivwjwxkxylyzmz";

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
