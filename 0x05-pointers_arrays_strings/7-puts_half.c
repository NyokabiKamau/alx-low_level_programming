#include "main.h"

/**
* puts_half - function that prints out the second half of a string.
* @str: input string to print.
*
* Return: Nothing
*/
void puts_half(char *str)
{
	int n, i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
		for (n = j; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		j = (i - 1) / 2;
		for (n = j + 1; j < i; n++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
