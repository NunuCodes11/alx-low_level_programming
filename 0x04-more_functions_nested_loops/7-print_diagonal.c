/*
 * File: 7-print_diagonal.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: parameters
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < n)
		{
			_putchar('\\');
			j++;
		}
		_putchar('\n');
	}
}
