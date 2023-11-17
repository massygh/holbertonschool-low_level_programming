#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: variable 1
 * @n: variable
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	const char *current_string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, const char *);

		if (current_string == NULL)
		{
			printf("(nil)");
		} else {
			printf("%s", current_string);
		}

		if (i < n - 1 && separator != NULL) 
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
