#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * int op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product ot two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of division
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
