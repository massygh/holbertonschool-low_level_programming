#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy string
 * @src: variable
 * @dest: varible2
 * @n: variable3
 * Return: Always (dest)
 */

char *_strncat(char *dest, char *src, int n)

{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	*temp = '\0';

	return (dest);
}
