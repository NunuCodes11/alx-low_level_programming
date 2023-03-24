/*
 * File: 8-print_square.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size - is the size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	int row, column;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

