#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: the string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half = (length - 1) / 2;
	int last;
	int i;

	if (half % 2 != 0)
	{
		last = half % 10;
		_putchar(last);
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < half; i++)
		{
			_putchar(i);
		}
	}
}
