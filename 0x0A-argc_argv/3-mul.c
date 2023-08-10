/*
 * Auth: Lawal Hamzat A.
 * File: 3-mul.c
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argv: array of strings
 * @argc: count of arguments
 * Return: 0 if sucessfuli
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
