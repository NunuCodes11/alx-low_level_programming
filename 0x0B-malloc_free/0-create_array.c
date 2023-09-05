/*
 * File: 0-create_array.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: length of the array
 * @c: chars to be put nto the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
