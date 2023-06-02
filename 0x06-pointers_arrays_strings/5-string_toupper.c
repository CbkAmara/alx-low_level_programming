#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @str: string changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)

	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
