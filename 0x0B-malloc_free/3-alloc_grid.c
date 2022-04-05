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
	int **grid;

	if (width <= 0 || height <= 0)
	{
		free(grid);
		return (NULL);
	}
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		grid = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
