#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - creates an array of chars
 * @b: variable
 * Return: Always (a)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
