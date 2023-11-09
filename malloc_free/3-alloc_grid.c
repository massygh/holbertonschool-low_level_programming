#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * @width: String 1
 * @height: String 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
	}

	return (grid);
}
