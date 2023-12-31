#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: variable
 * @src: variables
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';

	return (dest);
}
