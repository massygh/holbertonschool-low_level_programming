#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - use prototype
 *
 */

int print_sign(int n) 
{
	if (n > 0) 
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(1 + '0');
	} 
	else if (n == 0)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(0 + '0');
	} 
	else 
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar(1 + '0');
	}

	putchar('\n');
	return n;
}
