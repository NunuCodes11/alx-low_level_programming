/*
 * File: 6-puts2.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: rvalue to be processed
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
