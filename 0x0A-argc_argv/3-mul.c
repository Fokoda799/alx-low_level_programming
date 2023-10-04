#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: int var
* @argv: char var
* Return: 0 or 1
**/
int main(int argc, char *argv[])
{
	long m;

	if (argc != 3)
		printf("Error\n");
	else
	{
		m = (long) atoi(argv[1]) * (long) atoi(argv[2]);
	}
	printf("%ld\n", m);
	return (0);
}
