/*
 * File: 2-strlen_recursion.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string using recursion
 * @s: string to be accessed
 * Return: the lengthof the string
 */

int _strlen_recursion(char *s)
{	
	int len = 1;

	if (*s == '\0')
	{
		return 0;	
	}
	else
		return len + _strlen_recursion(s + 1); 
}	
