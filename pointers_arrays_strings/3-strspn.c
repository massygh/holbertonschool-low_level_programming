#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @a: variable
 * @accept: variable2
 * Return: Always count.
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
		{
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		count++;
	}

	return (count);
}
