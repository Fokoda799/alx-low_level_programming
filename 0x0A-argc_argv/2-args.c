#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: int var
* @argv: char var
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
