#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: String 1
 * @s2: String 2
 * Returns: pointer should point to a newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0;
	int i;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	while (s1[len1]) len1++;
	while (s2[len2]) len2++;

	result = (char *)malloc(len1 + len2 + 1);

	if (result)
	{
		for (i = 0; (result[i] = s1[i]); i++);
		for (i = 0; (result[len1 + i] = s2[i]); i++);
	}

	return (result);
}
