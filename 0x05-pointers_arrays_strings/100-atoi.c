#include "main.h"

/**
 * _atoi - Converts string to intergers
 * @x: The pointer to convert
 * Return: An integer
 */

int _atoi(char *x)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (x[c])
	{
		if (x[c] == 45)
		{
			min *= -1;
		}
		while (x[c] >= 48 && x[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (x[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
