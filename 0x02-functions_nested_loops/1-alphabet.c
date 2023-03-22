/*
 * File: 1-alphabet.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a newline
 *
 * Return: 0 Success
 */

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
