/*
 * File: 100-print_comb3.c
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - prints combos of two digits seperated by comma
 *
 * Return: 0
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 < 57; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 == 56 && digit2 == 57)
			{
				break;
			}

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
