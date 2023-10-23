#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: variable
 */

void rev_string(char *s)

{ 
	char *start = s;
	char *end = s + strlen(s) - 1;

	while (start < end)
	{ 
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
