#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: source string
 * @s2: destination string to be appended
 *
 * Return: pointer to newly allocated space in memory from s1
 * followed by the contents of s2, and null terminated
 * IF NULL is passed treat it as an empty string
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int str1, str2;
	char *a, *b;

	str1 = 0;
	str2 = 0;

	a = s1;
	if (s1)
	{
		while (*a++)
			str1++;
	}
	else
		s1 = "";
	a = s2;
	if (s2)
	{
		while (*a++)
			str2++;
	}
	else
		s2 = "";

	b = malloc(str1 + str2 + 1);
	if (!b)
	{
		return (NULL);
	}

	a = b;
	while (*s1)
		*a++ = *s1++;
	while (*s2)
		*a++ = *s2++;
	*a = 0;

	return (b);
}
