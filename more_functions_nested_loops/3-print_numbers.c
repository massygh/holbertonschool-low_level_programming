#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number
 * @a: int number
 * Return: 0 is succes
 */

void print_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
