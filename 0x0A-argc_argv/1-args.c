/*
 * File: 1-args.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: number of command line args
 * @argv: array of strings
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
