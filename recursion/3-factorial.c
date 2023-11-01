#include "main.h"
#include <stdio.h>

/**
 * factorial -  factorial of a given number
 * @n: variable
 * Return: Always 0.
 */

int factorial(int n)

{
	if (n < 0)

	{
		return(-1);
	}

	else if (n == 1)

	{
		return(1);
	}

	else

	{
		return(n * factorial(n - 1));
	}
}
