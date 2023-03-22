/*
 * File: 3-islower.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 *  _islower - checks if a character is lower case
 *  @c: contains value to be compared
 *
 *  Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
