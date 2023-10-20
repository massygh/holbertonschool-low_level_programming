#include <stdio.h>
#include "main.h"

/**
 * times_table - function that print multiple of 9
 */

void times_table(void)

{
	int i, j, product;


	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			product = i * j;

			_putchar(',');
			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
