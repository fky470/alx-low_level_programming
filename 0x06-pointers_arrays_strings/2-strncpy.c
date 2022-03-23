#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: the string
 * @src: the string
 * @n: number of bytes in character
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
