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
	unsigned int i, j, len1, len2, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	l = len1 + len2;
	p = malloc(sizeof(char) * l);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	j = 0;
	while (i <= l)
	{
		i++;
		j++;
		p[i] = s2[i];
	}
	return (p);
}
