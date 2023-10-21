#include "main.h"

/**
*flip_bits - returns the number of bits you would need to flip
*to get from one number to another
*@n: first number
*@m: second number
*Return: the number of bit flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 1, general = n ^ m;
	unsigned int flipped = 0;

	while (one != 0)
	{
		if ((general & num) != 0)
			flipped++;
		num = one << 1;
	}
	return (flipped);
}
