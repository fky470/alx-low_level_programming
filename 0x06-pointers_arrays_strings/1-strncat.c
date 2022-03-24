#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: the string
 * @src: the string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
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
		if (j < n)
		{
			dest[i] = src[j];
		}
	}

	return (dest);
}
