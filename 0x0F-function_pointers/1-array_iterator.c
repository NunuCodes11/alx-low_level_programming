/*
 * File: 1-array_iterator
 * Auth: Lawal Hamzat A.
 */
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *
 * @size: size of the array
 * @array: array to be printed
 * @action: a pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
