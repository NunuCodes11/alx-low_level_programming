/*
 * File: 0-strcat.c
 * Auth: Lawal Hamzat A.
 */
#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: pointer of a string to be concatenated
 * @src: pointer to char
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
