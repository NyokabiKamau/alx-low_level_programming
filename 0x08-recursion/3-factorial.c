#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: given number parameter
 *
 * Return: -1 if n is less than 0 to indicate an error
 * else return factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
