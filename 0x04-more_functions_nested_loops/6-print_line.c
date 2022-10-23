#include "main.h"
#include <stdio.h>

/**
 * print_line - prints n lines
 *@n: number of lines to be printed
 * Return: Always 0;
 */
void print_line(int n)
{
	while (n >= 1)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	putchar('_');
}
