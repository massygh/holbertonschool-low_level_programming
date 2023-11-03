#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: variable
 * @argv: variable2
 * Return: Always 0.
 **/

int main(int argc, __attribute__((unused)) char *argv[])

{
	printf("%d\n", argc - 1);
	return (0);
}
