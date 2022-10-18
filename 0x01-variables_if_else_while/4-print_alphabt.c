#include <stdio.h>

/**
 * main - prints all the letters except q and c
 * Return: returns 0
 */
int main(void)
{
	char small = 'a';

	while (small != 'q' && small != 'e' && small <= 'z')
	{
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}
