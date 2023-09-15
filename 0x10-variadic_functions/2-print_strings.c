/*
 * File: 2-print_strings.c
 * Auth: Lawal Hamzat A.
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed between the strings
  * @n: number of strings
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
