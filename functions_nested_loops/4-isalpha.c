#include <stdio.h>
#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: int
 * Return: 0 is succes
 */

int _isalpha(int c)

{
	{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	}
}
