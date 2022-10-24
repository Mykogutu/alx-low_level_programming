#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n : size of the line to be printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
				i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
	{
		_putchar('\n');
	}
}
