/**
 * main - entry point
 *
 * Description: Using sizeof operator
 * this program print the storage size of each data types
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int a;
	long int b;
	char c;
	float d;
	long long int e;

	printf("Size of a char: %d  byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(e));
	printf("Size of float: %d byte(s)\n", (int)sizeof(d));
	return (0);
}
