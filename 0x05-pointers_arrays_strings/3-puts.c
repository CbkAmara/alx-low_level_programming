#include "main"

/**
 * _puts - prints a string
 * @str: string printed
 * Return: Alawys o.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	_putchar('\n');
}
