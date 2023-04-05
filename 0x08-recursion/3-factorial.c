/*
 * File: 3-factorial.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * factorial - caculates the factorail of a given number
 * @n: Factorial value
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
