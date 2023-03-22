/*
 * File: 6-abs.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _abs - prints the absolute value of a digit
 *
 * @j: value to be assesed
 * Return: 0
 */

int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	return (-(j));
}
