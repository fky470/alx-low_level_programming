#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: the string
 * @src: the string
 * @n: an integer
 * Return: return src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	src[i] = '\0';

	return (src);
}
