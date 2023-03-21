/*
 * File: 2-print_alphabet_x10.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *
 * Return: 0 Sucess
 */
void print_alphabet_x10(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
