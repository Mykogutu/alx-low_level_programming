#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int maion(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d", r);
	r = is_prime_number(1024);
	printf("%d", r);
	r = is_prime_number(16);
	printf("%d", r);
	r = is_prime_number(17);
	printf("%d", r);
	r = is_prime_number(25);
	printf("%d", r);
	r = is_prime_number(-1);
	printf("%d", r);
	r = is_prime_number(113);
	printf("%d", r);
	return (0);
}
