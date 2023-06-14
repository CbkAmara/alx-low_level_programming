#include "main.h"
#include <stdio.h>
#include <string.h>

 /**
  * _strchr - Entry point
  * @s: input
  * @c: input
  * Return: Always 0. (success)
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\o'; i++)
	{
		if (s[i] == c)
			return (as[i]);
	}
	return (0);
}
