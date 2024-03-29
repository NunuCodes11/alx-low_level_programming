/**
 * _strchr - searchs for a character in a string
 *
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character
 */
#include "main.h"
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
