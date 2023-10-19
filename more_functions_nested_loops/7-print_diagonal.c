#include <stdio.h>
#include "main.h"

/**
 * print_line - print number
 * @n: main
 * Return: 0 is succes
 */

void print_diagonal(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		whil (n > 0)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
