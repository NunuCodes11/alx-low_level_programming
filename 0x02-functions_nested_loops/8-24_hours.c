/*
* File: 8-24_hours.c
* Auth: Lawal Hamzat A.
*/

#include "main.h"

/**
* jack_bauer - prints all the minutes in a day
*
* Return: 0
*/

void jack_bauer(void)
{
	int j, i;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(58);
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
