#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 *
 * Return: returns 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i--;
		is_prime_number(n);
	}
	return (0);
}


