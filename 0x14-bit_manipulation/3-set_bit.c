#include "main.h"
/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: pointer tothe number
*@index: index starting from 0 of the bit you want to set
*Return: Returns: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max = sizeof(unsigned long int) * 8;

	if (index >= max)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
