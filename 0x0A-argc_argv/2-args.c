#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: number of command line argurments
 * @argv: an array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
