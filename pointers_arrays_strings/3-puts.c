#include "main.h"
#include <stdio.h>

/**
 * puts - prints a string
 * @str: variable
 *
 */

void _puts(char *str)
	
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
