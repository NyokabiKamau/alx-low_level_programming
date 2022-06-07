#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet a-z, followed by new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

