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
	int j = 0, row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; j < n; j++)
		{
			for (row = 0; row < j; row++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
