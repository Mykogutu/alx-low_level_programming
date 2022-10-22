#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks if a charcter is
 * a digit number from 0-9
 * @c: character to be checked
 * Return: 1 if c is digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
