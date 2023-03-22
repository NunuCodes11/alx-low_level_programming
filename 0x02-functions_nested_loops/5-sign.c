/*
 * File: 5-sign.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: value to be compared
 *
 * Return: 1 if the n is greater than 0 and return 0 is n is zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar(48);
	return (0);
}
