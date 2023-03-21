/*
 * File: 6-print_numberz.c
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
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
