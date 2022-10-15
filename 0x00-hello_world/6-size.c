#include <stdio.h>

/**
 * main - The main function
 *
 * Description - Program that prints size of types
 * Return: It returns 0
 */

int main(void)
{
	int char_size = sizeof(char);

	int int_size = sizeof(int);

	int long_int_size = sizeof(long int);

	int long_long_int = sizeof(long long int);

	int float_size = sizeof(float);

	printf("Size of a char: %d byte(s)\n", char_size);
	printf("Size of an int: %d byte(s)\n", int_size);
	printf("Size of a long: %d byte(s)\n", long_int_size);
	printf("Size of a long long int: %d byte(s)\n", long_long_int);
	printf("Size of a float: %d byte(s)\n", float_size);
	return (0);
}
