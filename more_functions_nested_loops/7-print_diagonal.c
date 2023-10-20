#include <stdio.h>
#include "main.h"

/**
 * print_line - print number
 * @n: main
 * Return: 0 is succes
 */

void print_diagonal(int n)
{
	int i;
	int j;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; n > i; i++)

			for (j= 0;i > j; j++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');

	}
}
