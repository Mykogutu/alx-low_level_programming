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
		if (small == 'e')
		{
			continue;
		}
		else if (small == 'q')
		{
			continue;
		}
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}
