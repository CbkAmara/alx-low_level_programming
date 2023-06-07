#include "main.h"

/**
 * _strstr - Entrypoint
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *heystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\o')
			return (haystack);
	}
	return (0);
}
