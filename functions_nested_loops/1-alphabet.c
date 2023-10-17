#include <stdio.h>
#include "main.h"

/**
 * main - This program will prints _putchar
 * Return: On succes 1
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
