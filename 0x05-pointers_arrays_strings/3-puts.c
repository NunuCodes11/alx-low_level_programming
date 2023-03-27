/*
 * File: 3-puts.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _puts - return the a string
 * @str: the str to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
