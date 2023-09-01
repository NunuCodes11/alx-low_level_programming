/*
 * File Name: 2-strlen_recursion.c
 * Auth: Lawal Hamzat A.
 */
#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: pointer to a string
 * Return: the length of a string
 */


int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (-1);
}
