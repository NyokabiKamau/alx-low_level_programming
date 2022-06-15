#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string
 * @src: first string
 * @dest: second string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++);

	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;	
	}
	return (dest);
}
