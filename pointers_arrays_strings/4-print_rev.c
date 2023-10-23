#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: variable
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char *end = s + length - 1;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	putchar('\n');
}
