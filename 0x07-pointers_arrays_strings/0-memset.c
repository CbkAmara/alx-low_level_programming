#include <stdio.h>
#include "main.h"

/**
 * char *_memset -  fills memory with a constant byte.
 * @s: starting memory adress
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n byte
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
