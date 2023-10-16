#include <stdio.h>

/**
 * main - This program will prints the alphabet in and then in uppercase
 *
 * Return: 0 is succes
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
