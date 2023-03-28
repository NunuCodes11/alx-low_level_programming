/*
 * File: 9-strcpy.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string
 * @src: the string to be copied
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
