#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from, then a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

