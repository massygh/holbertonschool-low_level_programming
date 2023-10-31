#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: variable
 * @src: variable 2
 * @n: variable 3
 * Return: original_dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	{
		char *original_dest = dest;

		while (n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}

		return (original_dest);
	}
}
