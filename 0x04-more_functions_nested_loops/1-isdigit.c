/*
 * File: 1-isdigit.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _isdigit - checks if a number is digit
 * @c: value t be cmpared
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
