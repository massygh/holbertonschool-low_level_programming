#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: variable
 * @b: variable2
 * @n: variable3
 * Return: original
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *original = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (original);
}

