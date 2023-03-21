/*
 * File: 3-print_alphabets
 * Auth: Lawal Hamzat A.
 */

#include <stdio.h>

/**
 * main - prints both upper and lowercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
