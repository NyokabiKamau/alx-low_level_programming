#include "main.h"

/**
* rev_string - function that reverses a string
* @s: pointer to string.
*
* Return: Nothing
*/
void rev_string(char *s)
{
	int i, start, end, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
