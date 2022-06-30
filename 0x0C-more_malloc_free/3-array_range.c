#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;

	a = malloc(sizeof(int) * size + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
