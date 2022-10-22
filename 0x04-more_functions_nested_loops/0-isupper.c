#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if a character is an upper case
 *  letter.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		printf("A: 1");
	}
	else
	{
		printf("a: 0");
	}
	return (0);
}
