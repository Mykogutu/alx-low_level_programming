#include "main.h"
#include <stdio.h>

/**
 * print_square - print squares
 * @size: the number of squares
 *
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
