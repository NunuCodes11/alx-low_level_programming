#include "function_pointers.h"

/**
  * int_index - a function that searches for aan integer
  *
  * @size: number of element in the array
  * @cmp: a pointer to a function used to compare values
  * @array: the array to compare
  * Return: index where the value is found, -1 if not found
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!cmp || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
