#include "search_algos.h"

/**
 * print_array - Helper function to print an array.
 * @array: The array to print.
 * @left: Starting index.
 * @right: Ending index.
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index where value is located, or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
