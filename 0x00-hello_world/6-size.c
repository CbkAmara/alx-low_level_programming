#include <stdio.h>

/**
 * main - prints the size of various types on
 *  the computer it is compiled and run on.
 *  Return: Always 0.
 */

int main(void)
{
	char charType;
	int intType;
	float floatType;


	printf("Sizes of a char: %zu bytes\n", sizeof(char));
	printf("Sizes of a int: %zu bytes\n", sizeof(int));
	printf("Sizes of a long int: %zu bytes\n", sizeof(long int));
	printf("Sizes of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Sizes of a float: %zu bytes\n", sizeof(float));
	return (0);
}
