#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copy string
 * @src: variable
 * @dest: varible2
 * Return - Always (dest_start)
 */

char *_strcpy(char *dest, char *src)

{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_start;
}
