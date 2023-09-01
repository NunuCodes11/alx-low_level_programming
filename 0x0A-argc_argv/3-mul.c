/*
 * File: 3-mul.c
 * Auth: Lawal Hamzat A.
 */

/**
 * main - entry point
 *
 * @argc: number of command line args
 * @argv: array of strings
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
