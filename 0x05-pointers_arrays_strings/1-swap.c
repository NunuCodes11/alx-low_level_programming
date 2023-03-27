/*
 * File: 1-swap.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * swap_int - swaps two integer
 * @a: pointer to intger to be swapped
 * @b: pointer to integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
