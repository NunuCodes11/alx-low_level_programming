/*
 * File: 1-print_rev_recursion.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 *  _print_rev_recursion - reverse astring using recursion
 *  @s: string to bee reversed
 *  Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	       _putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
