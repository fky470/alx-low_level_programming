#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: sub-string
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (k);
		}
	}
	return (k);
}
