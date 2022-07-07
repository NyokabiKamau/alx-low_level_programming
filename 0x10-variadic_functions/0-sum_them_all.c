#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sums all its parameter
* @n: number of arguments
* @...: variable list of arguments passed to the parameters
*
* Return: sum else return 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = sum = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
