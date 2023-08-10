/*
 * Auth: Lawal Hamzat A.
 * File: 4-add.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * @argv: array of strings
 * @argc: count of arguments
 * Return: 0 if sucessfuli
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int count = 1;

	for (; count < argc; count++)
	{
		for (i = 0; argv[count][i]; i++)
		{
			if (isalpha(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
