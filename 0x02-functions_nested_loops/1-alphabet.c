#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = '0'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
