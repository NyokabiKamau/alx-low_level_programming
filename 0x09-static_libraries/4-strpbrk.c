#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: set of bytes to be searched
 * @accept: string to be searched
 *
 * Return: pointer to byte in s that matches bytes in accept
 * retun null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
