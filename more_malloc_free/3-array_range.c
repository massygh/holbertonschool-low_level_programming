#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of chars
 * @min: variable
 * @max: varible2
 * Return: Always (arr)
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
