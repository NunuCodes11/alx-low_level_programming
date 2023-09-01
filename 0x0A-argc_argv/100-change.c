/*
 * File: 100-change.c
 * Auth: Lawal Hamzat
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: count of arguments
 * @argv: array of strings
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int coin, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);
	change = 0;

	while (coin > 0)
	{
		if (coin / 25 >= 0)
		{
			coin -= 25;
		}
		else if (coin / 10 >= 0)
		{
			coin -= 10;
		}
		else if (coin / 5 >= 0)
		{
			coin -= 5;
		}
		else if (coin / 2 >= 0)
		{
			coin -= 2;
		}
		else if (coin / 1 >= 0)
		{
			coin -= 1;
		}
		change++;
	}
	printf("%d\n", change);
	return (0);
}
