/*
 * File: 4-isalpha.c
 * Auth: Lawal Hazmat A.
 */

#include "main.h"

/**
 * _isalpha - checks if a char is upper or lowercase
 * @c: value to be compared
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0)
}
