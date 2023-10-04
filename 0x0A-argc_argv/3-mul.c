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
	int m;

	if (argc == 1)
	{
		printf("Error");
		return (1);
	}
	else
	{
		m = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%i\n", m);
	return (0);
}
