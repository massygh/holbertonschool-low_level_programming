#include "main.h"
#include <stdio.h>

/**
 * swap_int - values of two integers.
 * @a: variable
 * @b: variable 2
 * 
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;       
	*b = temp;
}
