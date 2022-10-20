#include <stdio.h>

/**
 * main - prints all possible combinations
 * of single-digits
 * Returns: returns 0 if successfuk
 */
int main(void)
{
	int n = 0;

	for (n = 0; n <= 8; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
