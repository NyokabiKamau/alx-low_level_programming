#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index.
 * @n: pointer of number to change
 * @index: index starting from 0 of the bit to set
 *
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
