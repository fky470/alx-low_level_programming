#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: return a pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	p = malloc(1 + (len1 * sizeof(s1)) + (len2 * sizeof(s2)));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = *(s1 + i);
	}
	for (j = 0; j < len2; j++, i++)
	{
		p[i] = *(s2 + j);
	}
	return (p);
	free(p);
}
