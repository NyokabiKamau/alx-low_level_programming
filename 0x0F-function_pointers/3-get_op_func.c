#include "3-calc.h"

/**
 * *get_op_func - selects the right function to perform operation asked by user
 * @s: operates passed as an argument to the program
 *
 * Return: ptr to the function that corresponds to operator given as parameter
 * e.g get_op_func("+") returns op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op,s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
