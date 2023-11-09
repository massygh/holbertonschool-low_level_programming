#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: String 1
 * @s2: String 2
 * Return: pointer to concatenated string (or NULL on failure)
 */
char *str_concat(char *s1, char *s2) {
	int len1 = 0, len2 = 0, i;
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

	if (result)
	{
		for (i = 0; s1[i]; i++)
		{
			result[i] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
			result[len1 + i] = s2[i];
		}
		result[len1 + len2] = '\0';
		return result;
	}
	else
	{
		return (NULL);
	}
}
