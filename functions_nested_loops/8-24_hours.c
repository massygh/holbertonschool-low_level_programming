#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Write a function that checks for lowercase character.
 * Return: 0 is succes
 */

void jack_bauer(void)

{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
