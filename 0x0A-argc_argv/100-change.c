/*
 * File: 100-change.c
 * Auth: Lawal Hamzat A.
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of pointer to char
 * Return: 0 if successful otherwise return 1
 */
int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (-1);
	}
	while (cent > 0)
	{
		if (cent - 25 >= 0)
		{
			cent -= 25;
		}
		else if (cent - 10 >= 0)
		{
			cent -= 10;
		}
		else if (cent - 5 >= 0)
		{
			cent -= 5;
		}
		else if (cent - 2 >= 0)
		{
			cent -= 2;
		}
		else if (cent - 1 >= 0)
		{
			cent -= 1;
		}
			coins++;
	}
	printf("%d\n", coins);
	return (0);
}
