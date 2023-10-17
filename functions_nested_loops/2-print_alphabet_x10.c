#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - use prototype
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int number = 0;

	while (number < 10)
		{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		number++;
		}
}
