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
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *result = (char *)malloc(len1 + len2 + 1);

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	while (s1[len1]) len1++;

	while (s2[len2]) len2++;

	if (result)
	{
		for (i = 0; s1[i]; i++) result[i] = s1[i];
		for (j = 0; s2[j]; j++) result[i + j] = s2[j];
		result[i + j] = '\0';
	}
	return (result);
}
