/*
 * FIle: 6-print_line.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n - vlaue to be compared
 *
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
}
