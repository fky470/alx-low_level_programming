#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: a string
 * @src: a string
 * Return: return a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
