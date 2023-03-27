/*
 * File: 4-print_rev.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_rev - return the reversed string
 * @s: the pinter to char to be reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
