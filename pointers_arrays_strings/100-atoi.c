#include "main.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * _atoi - copy string
 * @s: variable
 * @src: varible2
 * Return: Always (resuult * sign)
 */


int _atoi(char *s)

{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if ((result > INT_MAX / 10) ||
					(result == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + digit;
		}
		else if (*s != '+' && *s != ' ' &&
				(*s < 'a' || *s > 'z') &&
				(*s < 'A' || *s > 'Z'))
		{
			break;
		}
		s++;
	}

	return (result * sign);
}