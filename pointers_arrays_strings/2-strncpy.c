#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)

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
