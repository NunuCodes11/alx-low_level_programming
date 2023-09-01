/*
 * File: 4-add.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array of strings
 * @argc: count of arguments
 * Return:retun 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	int digits;

	for (i = 1; i < argc; i++)
	{
		for (digits = 0; argv[i][digits]; digits++)
		{
			if (!(isdigit(argv[i][digits])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
