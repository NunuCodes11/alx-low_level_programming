/*
 * FIle: 6-print_line.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: value to be compared
 *
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
