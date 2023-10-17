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
		putchar('+');
		putchar(',');
		putchar(' ');
		putchar('1');
	} 
	else if (n == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		putchar('0');
	} 
	else 
	{
		putchar('-');
		putchar(',');
		putchar(' ');
		putchar('-');
		putchar('1');
	}

	putchar('\n');
	return n;
}
