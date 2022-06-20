#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: constant byte to fill
 * @n: number of bytes to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
