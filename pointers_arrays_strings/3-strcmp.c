#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: variable
 * @s2: variable2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1) - (*(unsigned char *)s2);
}
