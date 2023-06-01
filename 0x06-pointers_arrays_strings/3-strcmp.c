#include "main.h"

/**
 * _strcmp - Compares two strings
 * @x: First string
 * @y: second string
 * Return: value
 */

int _strcmp(char *x, char *y)
{
	while (*x && *y && *x == *y)
	{
		x++;
		y++;
	}
	return (*x - *y);
}
