#include <stdio.h>
#include "main.h"

/**
 * print_line - print number
 * Return: 0 is succes
 */

void print_line(int n)

{
	if (n <= 0) 
	{
		_putchar('\n');
	} 
	else 
	{	
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
		_putchar('\n');
	}
}
