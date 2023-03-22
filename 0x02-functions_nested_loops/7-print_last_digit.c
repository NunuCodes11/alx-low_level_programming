/*
 * File: 7-print_last_digit.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_last_digit - return the last digit of an integer
 * @j: value to be assessed
 *
 * Return: 0
 */

int print_last_digit(int j)
{
	int last_digit;

	if (j < 0)
	{
		last_digit = -(j % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	last_digit = (j % 10);
	_putchar(last_digit + '0');
	return (last_digit);
