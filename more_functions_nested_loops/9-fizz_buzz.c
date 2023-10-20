#include <stdio.h>
#include "main.h"

/**
 * main - main
 * Return: 0 is succes
 */

int main(void)

{
	int n;

	for (n = 1; n < 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}

		else if ((n % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}

		else if ((n % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}

		else
		{
			printf("%d" ,n);
			printf(" ");
		}
	}
	printf("Buzz\n");
return (0);
}
