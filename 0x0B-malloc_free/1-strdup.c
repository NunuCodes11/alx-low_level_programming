/*
 * File: 1-strdup.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 * @str: pointer to string to be duplicated
 *
 * Return: pointer to the duplicated string. It returns NULL if not successful
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}

