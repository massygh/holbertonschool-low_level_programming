#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)

{
	int left = 0;
	int right = n - 1;

	while (left < right)

	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
