/*
 * Auth: Lawal Hamzat A.
 * File: 100-change.c
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
	int coin, change;

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	while (coin > 0)
	{
		if (coin / 25 > 0)
			coin -= 25;
		else if (coin / 10 > 0)
			coin -= 10;
		else if (coin / 5 > 0)
			coin -= 5;
		else if (coin / 2 > 0)
			coin -= 2;
		else if (coin / 1 > 0)
			coin -= 1;
		change++;
	}
	printf("%d\n", change);
	return (0);
}

