#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: variable
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
