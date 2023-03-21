/*
 * File: 5-print_numbers.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - prints a single decimal digits
 *
 * Return: 0
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
