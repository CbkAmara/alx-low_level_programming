#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @str: string changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int ix;
	
	for (ix = 0; str[ix] != '\0'; ix++)

	{
		if (str[ix] >= 'a' && str[ix] <= 'z')
		{
			str[ix] -= 32;
		}
	}
	return (str);
}
