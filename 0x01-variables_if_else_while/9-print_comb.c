/*
 * File: 9-print_comb.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - prints combination of single digits separated by coma
 *
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
		if (numbers == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
