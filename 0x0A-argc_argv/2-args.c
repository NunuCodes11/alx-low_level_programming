/*
 * File: 2-args.c
 * Auth:LAwal Hamzat A.
 */

#include <stdio.h>
/**
 * main - entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{
	int i;
	/*loop through the number of CLA and print agrv value after each iteration*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
