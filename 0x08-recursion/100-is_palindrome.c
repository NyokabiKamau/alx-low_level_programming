#include "main.h"
/**
 * _strlen_recursion - prints reverse string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * pal - check palindrome
 * @n: string
 * @l: length of string
 * @i: identifier
 *
 * Return: 1 if palindrome and 0 if not
 */
int pal(char *n, int l, int i)
{
	if (i >= l)
	{
		return (1);
	}
	if (n[l] == n[i])
	{
		return (pal(n, l - 1, i + 1));
	}
	return (0);
}
/**
 * is_palindrome - word or phrase that reads the same backwards or forward
 * @s: string to be checked
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (pal(s, _strlen_recursion(s) - 1, 0));
}
