#include <stdio.h>

/**
 * main - prints all the numbe
 * of base 16 in lowercase
 * Return: return 0 if successful
 */
int main(void)
{
	int num;

	int letr;

	for (num = 0; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letr = 'a'; letr <= 'f'; letr++)
	{
		putchar(letr);
	}
	putchar('\n');
	return (0);
}
