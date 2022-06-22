#include "main.h"

/**
 * _pow_recursion - returns the natural square root of a number
 * @n: base
 * @y: power
 * Return: -1 if y is less than 0.
 */
int _pow_recursion(int n, int y)
{
	if (n * n == y)
	{
		return (n);
	}
	if (n * n > y)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(n + 1, y));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square root
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_pow_recursion(1, n));
}
