#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: variable
 * @argv: variable2
 * Return: Always 0.
 **/

int main(int argc, char *argv[])

{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
