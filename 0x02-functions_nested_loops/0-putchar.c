/*
 * File: 0-putchar.c
 * Auth: Lawal Hamzat A.
 */

#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
