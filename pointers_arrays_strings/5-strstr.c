#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: variable
 * @needle: variable 2
 * Return: Always NULL
 */

char *_strstr(char *haystack, char *needle)

{
	while (*haystack)
	{

		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
