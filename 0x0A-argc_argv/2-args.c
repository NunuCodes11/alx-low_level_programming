/*
 * File: 2-args.c
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
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
