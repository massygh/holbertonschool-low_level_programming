#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - use prototype
 *
 */

int print_sign(int n)
{
	char sign;
	int result;

	if ( n > 0 )
	{
		sign = '+';
		result = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		result = 0;
	}
	else
	{	
		sign = '_';
		result = -1;
	}
		putchar(sign);
		putchar(',');
		putchar(' ');
		putchar(result + '0');
		putchar('\n');

	return (result);
}
