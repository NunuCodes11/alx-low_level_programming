/**
 * File: 1-strncat.c
 * Auth: LAwal HAmzat A.
 */

#include "main.h"

/**
 * _strncat - concatates strings
 * @dest: pointer value
 * @n: bytes from src
 * @src: pointer value
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
