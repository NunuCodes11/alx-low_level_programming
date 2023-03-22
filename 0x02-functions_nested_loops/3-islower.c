/**
 * File: 3-islower.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 *  _islower - checks if a number is lowercase
 *
 *  Return: 0
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
