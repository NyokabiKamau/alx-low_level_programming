#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: an array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	{
		printf("%d\n", argc - 1);
		argv[0] = 0;
	}
	return (0);
}
