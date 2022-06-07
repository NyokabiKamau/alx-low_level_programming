#include "main.h"

/**
 * _islower - tests whether a c is lowercase letter from the alphabet.
 * @c: character to test
 * Returns: 1 if c is lowercase
 * otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
