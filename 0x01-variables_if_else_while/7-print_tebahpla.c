/*
 * File: 7-print_tebahpla.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	for (char letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
