#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: String 1
 * @s2: String 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0,
	int len2 = 0;
	int i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + len2] = '\0';

	return (result);
}
