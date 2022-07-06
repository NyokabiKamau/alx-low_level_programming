#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exe a function given as a parameter on each array element
 * @array: array elements
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
