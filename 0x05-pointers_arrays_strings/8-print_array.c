/*
 * File: 8-print_array.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * print_array - prints the element of array
 * @a: the pointer to the array
 * @n: length of the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\0");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i == n - 1)
			{
				continue;
			}
			printf(", ");
		}
	}
	printf("\n");
}
