#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: the string
 * @src: the string
 * @n: takes in an integer
 * Return: return *dest
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
	for (j = 0; src[j] < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
