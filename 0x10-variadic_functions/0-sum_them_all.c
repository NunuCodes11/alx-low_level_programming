/*
 * File: 0-sum_them_all.c
 * Auth: Lawal Hamzat A.
 */

#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - a function that returns sum of it parameters
  * @n: argument count
  * Return: the sum of the arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);

	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);
	va_end(numbers);
	return (result);
}
