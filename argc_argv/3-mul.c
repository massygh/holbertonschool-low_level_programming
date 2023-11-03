#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: variable
 * @argv: variable2
 * Return: Always 0.
 **/

int main(int argc, char *argv[])
{
	int v1 = 0, v2 = 0;

	if (argc == 3)
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[2]);
		printf("%d\n", v1 * v2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
