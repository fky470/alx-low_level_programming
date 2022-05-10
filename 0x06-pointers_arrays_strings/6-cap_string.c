#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: holds character
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char *p = "\t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		for (j = 0; p[j] != '\0'; j++)
		{
			if ((str[i] == p[j]) && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
