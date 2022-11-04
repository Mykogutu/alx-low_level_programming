#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion(int n) - returns the square root of a number
 * @n: Number
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if ((n / 2) * (n / 2) != n)
	{
		return (-1);
	}
	else
	{
		return (n / _sqrt_recursion(n - 1));
	}
}
