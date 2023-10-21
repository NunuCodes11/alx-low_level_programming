#include "main.h"
/**
  * get_bit - a function that returs the value of a bit at the given index
  * @n: the number
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_indx = (sizeof(unsigned long int) * 8);

	if (index >= max_indx)
		return (-1);
	return ((n >> index) & 1);

}
