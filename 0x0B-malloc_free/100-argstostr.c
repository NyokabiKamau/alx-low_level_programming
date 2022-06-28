#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of command line arguments
 * @av: an array of size ac
 *
 * Returns NULL if ac == 0 or av == NULL
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, n = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	a = (char *)malloc(len * sizeof(char) + ac + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, n++)
			a[n] = av[i][j];
		a[n] = '\n';
		n++;
	}
	a[n] = '\0';
	return (a);
}
