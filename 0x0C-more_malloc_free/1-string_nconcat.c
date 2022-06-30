#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - function that concatenates two strings
* followed by the first n bytes of s2, and null terminated
* @s1: source string
* @s2: destination string to be appended
* @n: number of bytes to be appended
*
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string
* Return: pointer to a newly allocated space in memory, which contains s1
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < str2)
		s = malloc(sizeof(char) * (str1 + n + 1));
	else
		s = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!s)
		return (NULL);

	while (i < str1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < str2 && i < (str1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= str2 && i < (str1 + str2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
