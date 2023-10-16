#include <stdio.h>

/**
 * main - This program will prints the alphabet in and then in uppercase
 *
 * Return: 0 is succes
 */

int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	putchar('\n');
	return (0);
}
