#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * print the result of the multiplication, new line
 * assume two nos & result of the multiplication can be stored in an integer
 * If the program does not receive two arguments print Error,
 * followed by a new line, and return 1
 * @argc: number of command line arguments
 * @argv: array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	i = 0;
	i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	return (0);
}
