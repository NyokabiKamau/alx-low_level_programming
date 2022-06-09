#include "main.h"

/**
 * print_square - print square follwed by new line
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int n, i;

	if (size > 0)
	{
		for (n = 0; n < size ; size++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
