#include "main.h"
#include <stdio.h>

/**
 * factorial - finds the factorial of int n
 * @n: integer input
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
