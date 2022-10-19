#include <stdio.h>

/**
 * main - prints the lowecase alphabet
 * in reverse
 * Return: It returns 0 if successful
 */
int main(void)
{
	char letr = 'z';

	while (letr >= 'a')
	{
		putchar(letr);
		letr--;
	}
	putchar('\n');
	return (0);
}
