/**
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

	for (i = 0; i < n; i++)
	{
		if (i == 4)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
