#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: pointer to string to be converted
 *
 * Return: converted string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}
	return (c);
}
