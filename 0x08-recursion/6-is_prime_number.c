#include "main.h"

/**
 * is_prime - prints prime numbers
 * @n: number to be checked
 * @xy: product of two integers
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int xy)
{
	if (xy % n == 0 || xy < 2)
	{
		return (0);
	}
	if (n == xy - 1)
	{
		return (1);
	}
	if (xy > n)
	{
		return (is_prime(n + 1, xy));
	}
	return (1);
}
/**
 * is_prime_number - prints prime numbers
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime(2, n));
}
