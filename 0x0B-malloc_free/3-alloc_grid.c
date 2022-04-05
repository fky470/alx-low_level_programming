#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: return a pointer or null
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	if (!p)
	{
		return ('\0');
	}
	p = malloc(sizeof(int) * height);
	{
		for (i = 0; i < height; i++)
		{
			p = malloc(sizeof(int) * width);
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
				{
					return ('\0');
					free(p[i]);
				}
				free(p);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
	}
	return (p);
}
