#include "main.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * _strcpy - copy string
 * @src: variable
 * @dest: varible2
 * Return: Always (dest_start)
 */


int _atoi(char *s)

{
	int result = 0;
	int sign = 1;
	int digit;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) 
			{
				return (sign == 1) ? INT_MAX : INT_MIN;
			}
			result = result * 10 + digit;
		}
		else
		{
			break;
		}
		s++;
	}

	return result * sign;
}
