#include <stdlib.h>
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
	if (!name || !f)
		return;
	f(name);
}
