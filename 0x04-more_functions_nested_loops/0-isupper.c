#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character that checks
 * Return: 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
		if (c >= 'Z' && c <= 'Z')
			return (1);
		else
			return (0);
}
