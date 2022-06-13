#include "main.h"

/**
* print_rev - function that prints a string in reverse, followed by a new line
* @s: string to be reversed
* Return: nothing
*/
void print_rev(char *s)
{
	int i, end;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	end = i - 1;
	for (; end >= 0; end--)
	{
		_putchar(s[end]);
	}
	_putchar('\n');
}
