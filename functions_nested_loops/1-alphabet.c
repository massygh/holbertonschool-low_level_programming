#include <stdio.h>
#include "main.h"

/**
 * main - This program will prints _putchar
 * Return: On succes 1
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
