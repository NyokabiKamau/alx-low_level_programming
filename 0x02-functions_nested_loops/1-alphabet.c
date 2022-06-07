#include "main.h"

/**
 * print_alphabet - prints the alphabet a-z, followed by a new line
 *
 * Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
