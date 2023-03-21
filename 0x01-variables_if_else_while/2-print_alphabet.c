/*
 * File: 2-print_alphabet
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - print alpabet in lowercase
 *
 * Return: Alway 0
 */

int main(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
