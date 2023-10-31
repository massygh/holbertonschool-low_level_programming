#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Write a function that checks for lowercase character.
 * @c: int
 * Return: 0 is succes
 */

int _isdigit(int c)
{
	{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
	}
}
