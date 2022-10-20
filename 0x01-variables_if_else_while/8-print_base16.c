#include <stdio.h>

/**
 * main - prints all the numbe
 * of base 16 in lowercase
 * Return: return 0 if successful
 */
int main(void)
{
	int num = '0';

	int c = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
