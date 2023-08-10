/*
 * Auth: Lawal Hamzat A.
 * File: 1-args.c
 */

#include <stdio.h>

/**
 * main - entry point
 *
 * @argv: array of strings
 * @argc: count of arguments
 * Return: 0 if sucessfuli
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
