#include <stdio.h>

/**
 * main - prints all the letters except q and c
 * Return: returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
