#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of the line
 * Return: void
 */
void print_line(int n);
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		_putchar('_');
	}
	else
	{
		_putchar('\n')
	}
}
