#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: variable
 * @src: variable2
 * @n: variable3
 * Return: Always dest_orig.
 */

char *_strncpy(char *dest, char *src, int n)

{
	char *dest_orig = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_orig);
}
