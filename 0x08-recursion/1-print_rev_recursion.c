/*
 * File: 1-print_rev_recursion.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse using recursion
 *
 * @s: string to be reversed
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
		_putchar(*s);
}
