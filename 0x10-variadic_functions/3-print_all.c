/*
 * File: 3-print_all.c
 * Auth: Lawal Hamzat A.
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list all;
	char *s, *sep;

	va_start(all, format);

	sep = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(all);
}
