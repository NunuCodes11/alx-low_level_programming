#include "main.h"
/**
* print_binary - prints the binary rep of a number
* @n: number to convert
*/
void print_binary(unsigned long int n)
{
	int convert = 1;
	if (n > 1)
		print_binary(n >> convert);
	_putchar((n & convert) + '0');
}
