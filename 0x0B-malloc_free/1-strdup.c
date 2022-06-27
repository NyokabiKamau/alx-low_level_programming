#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * _strdup() function returns a ptr to a new string duplicate of string str.
 * Memory for new string is obtained with malloc, & can be freed with free
 * @str: pointer to duplicated string
 *
 * Return: NULL if str = NULL, or insufficient memory available
 * On succes, return ptr to duplicated string.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	a = malloc((length + 1) * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
