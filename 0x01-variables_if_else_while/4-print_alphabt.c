#include <stdio.h>

/**
 * main - prints all the letters except q and c
 * Return: returns 0
 */
int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		if (small == 'q' || small == 'e')
				continue;
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}
