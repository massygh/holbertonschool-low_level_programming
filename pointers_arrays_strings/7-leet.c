#include "main.h"
#include <stdio.h>

/**
 * *leet - encodes a string
 * @str: variable
 * Return: Always str
 */

char *leet(char *str)
{
	char leetMap[256];
	int i;

	for (i = 0; i < 256; i++)
	{
		leetMap[i] = i;
	}

	leetMap[(unsigned char)'a'] = leetMap[(unsigned char)'A'] = '4';
	leetMap[(unsigned char)'e'] = leetMap[(unsigned char)'E'] = '3';
	leetMap[(unsigned char)'o'] = leetMap[(unsigned char)'O'] = '0';
	leetMap[(unsigned char)'t'] = leetMap[(unsigned char)'T'] = '7';
	leetMap[(unsigned char)'l'] = leetMap[(unsigned char)'L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = leetMap[(unsigned char)str[i]];
	}

	return (str);
}
