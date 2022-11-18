#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all parameters
 * @n: number of parameters
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			total += va_arg(args, int);
		}
		va_end(args);
		return (total);
	}
	return (0);
}
