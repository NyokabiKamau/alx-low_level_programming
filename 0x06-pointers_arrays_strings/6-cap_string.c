#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @c: pointer to the character
 *
 * Return: c
 */
char *cap_string(char *c)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		for (j = 0; sep[j] != '\0'; j++)
			if (c[i] == sep[j] && c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
	}
	return (c);
}
