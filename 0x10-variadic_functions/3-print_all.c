#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: a list of types of arguments passed on the function
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int i;
	char *s;
	double f;
	char c;
	int j;

	va_start(ap, format);
	j = 0;
	while (format[j] != '\0')
	{
		if (format[j] == va_arg(ap, char))
		{
			c = va_arg(ap, char);
			printf("%c", c);
		}
		else if (format[j] == va_arg(ap, int))
		{
			i = va_arg(ap, int);
			printf("%d", i);
		}
		else if (format[j] == va_arg(ap, double))
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (format[j] == va_arg(ap, char *))
		{
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}

