#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment to compare bytes from
 * @accept: string to compare with
 *
 * Return: no of bytes in s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
