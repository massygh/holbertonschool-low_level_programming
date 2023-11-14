#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: variable
 * @cmp: variable 2
 *
 * Return: (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
