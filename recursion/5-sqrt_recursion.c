#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursive _sqrt_recursion - jnzefijnzejoifnijzn
 * @n: variable
 * @guess: L'estimation courante de la racine carrée.
 * Return: La racine carrée si elle est trouvée, -1 si elle n'est pas
 * trouvée.
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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursive(n, 1));
}
