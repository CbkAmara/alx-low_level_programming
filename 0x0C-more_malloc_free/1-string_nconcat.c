#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to concatenate from s2
 *
 * Return: Pointer to concatenated string (must be freed) or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, concat_len;
	char *concat;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Use the entire s2 string if n is greater or equal to its length */
	if (n >= s2_len)
		n = s2_len;

	concat_len = s1_len + n;

	concat = malloc((concat_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, s1_len);
	strncat(concat, s2, n);
	concat[concat_len] = '\0';

	return (concat);
}

/**
 * main - Test the string_nconcat function
 *
 * Return: Always 0
 */
int main(void)
{
	char *s1 = "Best ";
	char *s2 = "School !!!";
	unsigned int n = 6;

	char *result = string_nconcat(s1, s2, n);

	if (result != NULL)
	{
		printf("Concatenated string: %s\n", result);
		free(result);
	}

	else
	{
		printf("Failed to allocate memory.\n");
	}

	return (0);
}
