#include "main.h"
#include <stdio.h>

/**
 * print_last_digit
 *@n : main
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int z = n % 10; 
if (n > 0)
	{
	_putchar(z + '0');
	}

	else
	{
	z = -n % 10;
	_putchar(z + '0');
	}
	return (z);	  
}
