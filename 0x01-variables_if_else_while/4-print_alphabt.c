#include <stdio.h>

/**
 * main - prints alhabets in lower case followed by a new line
 * except q and e
 * Return: Always 0.
 */

int main(void)
{
	char z;

	for (z = 'a'; z <= 'z'; z++)
	{
		if (z != 'e' && z != 'q')
			putchar(z);
	}
	putchar('\n');

	return (0);
}
