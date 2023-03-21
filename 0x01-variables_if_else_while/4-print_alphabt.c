/*
 * File: 4-print_alphabt.c
 * Auth: Lawal Hamzat
 */

#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == 'q' ||  j == 'e')
		{
			continue;
		}
		putchar(j);
	}
	putchar('\n');
	return (0);
}
