#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer of pointer to set
 * @to: character to point to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
