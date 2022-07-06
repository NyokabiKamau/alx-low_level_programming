#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: person's name
 * @f: function pointer to char pointer
 *
 * Retunr: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
