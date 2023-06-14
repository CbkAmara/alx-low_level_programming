#include <unistd.h>

/*
 * Writes a single character to the standard output.
 *
 * Parameters:
 *   c: The character to be written.
 *
 * Returns:
 *   On success, returns the number of bytes written (always 1 in this case).
 *   On error, returns -1.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
