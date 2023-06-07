#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the lenth of a string.
 * @str: strng
 * Return: the lenth of a string.
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}

/**
 * comparator - compares each character of the string.
 * @str: string
 * @num1: smallest iterator
 * @num2: biggest iterator
 * Return: .
 */

int comparator(char *str, int num1, int num2)
{
	if (*(str + num1) == *(str + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparator(str, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @str: string
 * Return: 1 if str is a palindrome, 0 if not
 */

int is_palindrome(char *str)
{
	if (*str == '\0')
		return (1);
	return (comparator(str, 0, _strlen_recursion(str) - 1));
}
