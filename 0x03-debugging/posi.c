#include <stdio.h>

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("postive");
	}
	else if (i < 0)
	{
		printf("negative");
	}
	else
	{
		printf("%d is zero", i);
	}
}
