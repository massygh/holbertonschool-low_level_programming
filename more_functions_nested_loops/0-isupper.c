#include <stdio.h>
#include "main.h"

/**
 * _isupper - Write a function that checks for lowercase character.
 * @c: int
 * Return: 0 is succes
 */

int _isupper(int c)
{
	{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	}
} 
