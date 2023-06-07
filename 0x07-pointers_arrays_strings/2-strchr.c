#include "main.h"
 /**
  * _strchr - Entry point
  * @s: input
  * @c: input
  * Return: Always 0.
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
