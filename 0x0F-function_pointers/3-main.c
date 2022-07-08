#include "3-calc.h"

/**
* main - checks the correct function to use .
* @argc: number of command line arguments being passed
* @argv: an array of size argc
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char c;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
