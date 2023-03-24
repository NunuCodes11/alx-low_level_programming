/*
 * File: 0-isupper.c
 * Auth: Lawal Hamzat
 */

#include "main.h"

/**
 * _isupper - checks if a a number is uppercase
 * @c: the vlaue tobe compared
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	return (0);
}
