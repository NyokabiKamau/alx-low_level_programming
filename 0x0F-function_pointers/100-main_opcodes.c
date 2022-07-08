#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: num of command line arguments
 * @argv: an array of argc
 * opcodes should be printed in hexadecimal, lower
 * list ends with a new line
 * print Error if num of arguments is incorrect or -ve num of bytes
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int nbytes, i;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op = (char *) main;

	for (i = 0; i < nbytes; i++)
	{
		if (i == nbytes - 1)
		{
			printf("%02hhx\n", op[i]);
			break;
		}
		printf("%02hhx ", op[i]);
	}
	return (0);
}
