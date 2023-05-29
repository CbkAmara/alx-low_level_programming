#include <stdio.h>

/**
 * _strlen - Returns the lenth of the string.
 * @str: get the lent of the string
 * Return: The lenth of the @str.
 */

size_t _strlen(const char *str)
{
	size_t lenth = 0;

	while (*str++)
		lenth++;
	return (lenth);
}
