/*
 * File: 1-print_numbers.c
 * Auth: Lawal Hamzat A.
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - prints number follwed by a new line
  * @separator: string to be printed with the numbers
  * @n: argument count
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		if (separator != NULL)
		{
			if (i == 0)
			{
				printf("%d", num);
				continue;
			}
			printf("%s%d", separator, num);
		}
		;
	}
	va_end(numbers);
	printf("\n");
}

