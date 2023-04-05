/*
 * File: 4-pow_recursion.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to power y
 * @x: the number
 * @y: the power
 * Return: the vslue of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
