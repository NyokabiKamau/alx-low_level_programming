#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to filled
 * @a: char to copy
 * @n: number of times to copy bytes
 *
 * Return pointer to memory s
 */
char *_memset (char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = a;
	return (s);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * it allocates memory for array of nmemb elements of size bytes each
 * The memory is set to zero
 * @nmemb: number of elements
 * @size: size of bytes
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);

	_memset(c, nmeb * size);
	return (c);
}
