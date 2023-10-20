#include <stdio.h>
#include "main.h"

/**
 *
 * Return: 0 is succes
 */

void times_table(void)

{
	int i, j;
	int product;

	for (i = 0; i <= 9; i++) 
	{
		for (j = 0; j <= 9; j++)
		{

			if (j > 0) 
			{
				putchar(',');
				putchar(' ');
			}
			if (product = i * j, product < 10)
			{
				putchar(' ');
				putchar(product + '0');
			} 
			else 
			{
				putchar(product / 10 + '0');
				putchar(product % 10 + '0');
			}
		}
		putchar('\n');
	}
}
