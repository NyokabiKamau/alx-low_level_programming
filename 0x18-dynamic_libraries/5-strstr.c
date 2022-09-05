#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: pointer to the beginning of the located substring, else null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
