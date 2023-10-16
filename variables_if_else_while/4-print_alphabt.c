#include <stdio.h>

/**
 * main - This program will prints the alphabet in and then in uppercase
 *
 * Return: 0 is succes
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
