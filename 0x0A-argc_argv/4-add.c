/*
 * File: 4-add.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add postive numbers on the command line
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
			printf("%d\n", add);
		}
		printf("%d\n", add);
		return (0);
	}
	return (0);
}
