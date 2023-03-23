/*
 * File: 11-print_to_98.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: value to be processed
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >=  98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
