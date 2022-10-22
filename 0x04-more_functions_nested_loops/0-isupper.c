#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if a character is an upper case
 *  letter.
 *@c: character
 * Return: Always 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
