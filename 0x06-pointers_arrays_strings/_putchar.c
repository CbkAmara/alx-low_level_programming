#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes all characters c to stdout
 * @c - the charector to print
 * Return: Always 0.
 *
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

