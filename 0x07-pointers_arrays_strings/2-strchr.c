#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurrence of c and NULL when not found
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}

