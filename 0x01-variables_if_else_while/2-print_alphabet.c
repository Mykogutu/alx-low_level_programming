#include <stdio.h>

/**
 * main - prints alphabets in
 * lowercase using putchar.
 * Return: It returns 0.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		putchar(alphabet);
		alphabet++;
		putchar('\n');
	}
	return (0);
}
