#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum no of coins to make change for an amount of money
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to program is not exactly 1,
 * print Error, a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * If the number passed as the argument is -ve, print 0, a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	cents = atoi(argv[1]);

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
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
