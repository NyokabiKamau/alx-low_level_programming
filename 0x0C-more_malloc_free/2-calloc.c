#include "main.h"
#include <stdlib.h>

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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);

	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		c[i] = 0;
	return (c);
}
