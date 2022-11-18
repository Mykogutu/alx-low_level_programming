#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed in the function
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

