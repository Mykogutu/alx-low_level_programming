#include <stdio.h>

/**
 * main -prints all single digit numbers
 * of base 10 starting from 0
 * Return: returns 0 is success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
