/*
 * File: 0-puts_recursion.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _puts_recursion - prints strings using recursion
 * @s: pointer to s
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
