/**
  * binary_to_uint - converts binary to an unsigned int
  * @b: pointer to string to be converted
  * Return: converted number, 0 if b is NULL
  */
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
	int i;

	if (!b)
	{
		return (0);
	}
	converted = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] !=  49)
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		converted <<= 1;
		if (b[i] == 49)
		{
			converted |= 1;
		}
	}
	return (converted);

}
