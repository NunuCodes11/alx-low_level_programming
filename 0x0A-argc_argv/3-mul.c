/*
 * File: 3-mul.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two command line agrument numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 if succesful otherwise return -1
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
