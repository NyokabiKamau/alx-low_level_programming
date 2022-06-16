#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: pointer to character
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char p;

	for (i = 0; s[i] != '\0'; i++)
	{
		p = 0;
		for (j = 0; alp[j] != '\0' && p == 0; j++)
		{
			if (s[i] == alp[j])
			{
				s[i] = rt[j];
				p = 1;
			}
		}
	}
	return (s);
}
