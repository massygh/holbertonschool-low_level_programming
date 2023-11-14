#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 if successful, otherwise 98, 99, or 100
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	operation = get_op_func(operator);

	if (!operation || ((*operator == '/' || *operator == '%') && num2 == 0))
	{
		printf("Error\n");

		if (*operator == '/' || *operator == '%')
			return (100);
		else
			return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
