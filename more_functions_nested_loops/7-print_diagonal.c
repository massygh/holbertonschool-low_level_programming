#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal
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
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
				_putchar(92);
			_putchar('\n');
		}
	}
}
