#include <stdio.h>

/**
 * main - This program will prints the alphabet in and then in uppercase
 *
 * Return: 0 is succes
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number > 10)
			{
			putchar(',');
			putchar(' ');
			}
			putchar(number);
	}
	putchar('\n');

	return (0);
}
