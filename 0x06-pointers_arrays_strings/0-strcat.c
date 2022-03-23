#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: the string
 * @src: the string
 * Return: return dest to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
