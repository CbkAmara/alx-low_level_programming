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


	printf("Sizes of a char: %lu bytes\n", sizeof(char));
	printf("Sizes of a int: %lu bytes\n", sizeof(int));
	printf("Sizes of a long int: %lu bytes\n", sizeof(long int));
	printf("Sizes of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Sizes of a float: %lu bytes\n", sizeof(float));
	return (0);
}
