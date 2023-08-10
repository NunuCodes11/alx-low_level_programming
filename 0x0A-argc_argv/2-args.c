/*
 * Auth: Lawal Hamzat A.
 * File: 2-args.c
 */

#include <stdio.h>

/**
 * main - entry point
 *
 * @argv: array of strings
 * @argc: count of arguments
 * Return: 0 if sucessfuli
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
