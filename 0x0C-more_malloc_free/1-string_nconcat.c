#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to concatenate from s2
 *
 * Return: Pointer to the concatenated string (must be freed) or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Handle NULL strings by treating them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	/* Adjust n if it is greater or equal to the length of s2 */
	if (n >= s2_len)
		n = s2_len;

	/* Allocate memory for the concatenated string */
	char *concatenated = malloc(s1_len + n + 1);
	if (concatenated == NULL)
		return NULL;

	/* Copy s1 into the concatenated string */
	strcpy(concatenated, s1);

	/* Copy the first n characters of s2 into the concatenated string */
	strncat(concatenated, s2, n);

	return concatenated;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	unsigned int n = 5;

	char *result = string_nconcat(s1, s2, n);
	if (result != NULL)
	{
		printf("Concatenated string: %s\n", result);
		free(result); /* Free the allocated memory */
	}
	else
	{
		printf("Failed to allocate memory.\n");
	}

	return 0;
}
