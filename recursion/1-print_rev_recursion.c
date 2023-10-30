#include "main.h"———

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: variable
 */

void _print_rev_recursion(char *s)

{
	int i;

	for (i = 15, s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar
