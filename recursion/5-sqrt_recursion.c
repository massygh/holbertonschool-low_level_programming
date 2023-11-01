#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - natural square root of a number
 * @n: variable
 * @guess: variable 2
 */

int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursive(n, guess + 1));
}


/**
 * _sqrt_recursive - square
 */ 

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursive(n, 1));
}
