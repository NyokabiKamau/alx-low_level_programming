#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers, new line
* @a: the array of elements
* @n: the number of elements of the array *a.
*
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
