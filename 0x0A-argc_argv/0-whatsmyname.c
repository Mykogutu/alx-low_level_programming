#include <stdio.h>

/**
 * main - prints the nam of the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
