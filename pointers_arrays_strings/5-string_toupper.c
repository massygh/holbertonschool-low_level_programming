#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - changes all lowercase
 * Return: Always str
 */

char *string_toupper(char *str)

{
	char *ptr = str;

	while (*ptr)
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}

	return (str);
}
