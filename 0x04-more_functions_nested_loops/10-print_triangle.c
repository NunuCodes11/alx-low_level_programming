/*
 * File: 10-print_triangle.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: size of the traingle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int hash, space, row;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (space = size - 1; space >= row; space--)
		{
			_putchar(32);
		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
