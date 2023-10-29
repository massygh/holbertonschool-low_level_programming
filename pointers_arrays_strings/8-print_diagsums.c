#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: variable
 * @size: variable 2
 */

void print_diagsums(int *a, int size)

{
	int primarySum = 0;
	int secondarySum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primarySum += a[i * size + i];
		secondarySum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primarySum, secondarySum);
}
