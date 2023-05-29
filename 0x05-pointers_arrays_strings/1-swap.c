#include <stdio.h>

/**
 * swap_int -Swaps the values of two intergers.
 * @a: int swapped first
 * @b: int swapped second.
 * Return: Always 0.
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}	
