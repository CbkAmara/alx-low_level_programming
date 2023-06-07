#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime or not
 * @num: the number to be checked
 * Return: integer value
 */

int is_prime_number(int num)
{
	return (check_prime(num, 1));
}

/**
 * check_prime - checks if the number is prime
 * @num: the number to be checked
 * @i: the iteration times
 * Return: 1 for prime or 0 composite
 */

int check_prime(int num, int i)
{
	if (num <= 1)
		return (0);
	if (num % i == 0 && i > 1)
		return (1);
	return (check_prime(num, i + 1));
}
