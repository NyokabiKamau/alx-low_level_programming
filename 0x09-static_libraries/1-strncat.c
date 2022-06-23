#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination of the string
 * @src: string to be appended
 * @n: number of bytes to print from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
