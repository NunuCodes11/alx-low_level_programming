/*
 * FIle: str_concat.c
 * AUth:Lawal Hamzat A.
 */
#include "main.h"
/**
 * str_concat - to a newly allocated space which contains the contents of s1&s2
 * @s1: string to be concantenate
 * @s2: string to be concate
 *
 * Return: NULL on failure, when successful, a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
