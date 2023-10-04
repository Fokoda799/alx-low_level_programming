#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the minimum number of coins
* to make change for an amount of money.
* @argc: int argemment.
* @argv: char argemment.
* Return: 0
**/
int main(int argc, char *argv[])
{
	int cents;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
