#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: variable
 */

void _print_rev_recursion(char *s)

{
	int i;
	int longeur = strlen(s);

	for (i = longeur - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
