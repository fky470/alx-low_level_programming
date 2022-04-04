#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prints a copy of the string given as a parameter
 * @str: the string
 * Return: returns a pointer or returns NULL
 * if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, j;
	char *p;
	i = 0;

	if (!str)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		i++;
	}
	i++;

	p = malloc(sizeof(char) * i);

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
