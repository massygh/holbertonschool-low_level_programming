#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will prints the alphabet in and then in uppercase
 *
 * Return: 0 is succes
 */

int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
