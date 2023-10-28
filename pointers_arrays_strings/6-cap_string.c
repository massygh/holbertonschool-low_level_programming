#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: variable
 * Return: Always str.
 */

char *cap_string(char *str)

{
	int i = 0;
	while (str[i] != '\0')
	{
		  if (str[i] >= 'a' && str[i] <= 'z' && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

