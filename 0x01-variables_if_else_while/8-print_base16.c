/*
 * File: 8-print_base16.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * mian - prints hexadecimals in lower case
 *
 * Return: 0
 */

int main(void)
{
	int number;
	char letter;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
