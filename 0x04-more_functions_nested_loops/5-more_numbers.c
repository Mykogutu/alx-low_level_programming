#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times numbers
 * from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d",j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
