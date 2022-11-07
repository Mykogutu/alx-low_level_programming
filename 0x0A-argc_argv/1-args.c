#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * Return: Always 0,
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc >= 2)
	{
		printf("%d\n", argc);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
