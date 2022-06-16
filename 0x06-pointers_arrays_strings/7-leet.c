#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @s: pointer to the character
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char sub[] = "aAeEoOtTlL";
	char lt[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
			if (s[i] == sub[j])
			{
				s[i] = lt[j / 2];
			}
	}
	return (s);
}
