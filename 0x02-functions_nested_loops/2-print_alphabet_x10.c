#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet a-z, followed by new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c < 10; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

