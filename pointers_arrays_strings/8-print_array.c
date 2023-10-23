#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints half of a string
 * @a: variable
 * @n: variable
 */

void print_array(int *a, int n)

{ 
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}

	printf("\n");
}
