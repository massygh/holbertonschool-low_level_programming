#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime
 * @n: variable 
 * Return: Always 0.
 */

int is_prime_number(int n)

{
	if ( n %2 != 0 && n %3 != 0 && n %5 != 0 && n > 1)
	{
		return(1);
	}
	
	else
	{
		return(0);
	}
}
