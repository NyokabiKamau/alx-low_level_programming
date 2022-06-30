#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block
* ptr is prvsly allocated memory pointer with call to malloc: malloc(old_size)
* old_size is the size, in bytes, of the allocated space for ptr
* and new_size is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space,
* in the range from the start of ptr up to the minimum of the old and new sizes
* If new_size > old_size, the “added” memory should not be initialized
* If new_size == old_size do not do anything and return ptr
* If ptr is NULL, then the call is equivalent to malloc(new_size), f
* or all values of old_size and new_size
* If new_size=0 and ptr !NULL, then the call is eqvlnt to free(ptr).Return NULL
* Don’t forget to free ptr when it makes sense
* @ptr: pointer to the original memory block
* @old_size: old size of memory block
* @new_size: new size of memory block
* Return: pointer to reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r, *nptr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		r = malloc(new_size);
		return (r);
	}
	if (new_size > old_size)
	{
		r = malloc(new_size * sizeof(char));
		nptr = ptr;
		for (i = 0; i < old_size; i++)
			r[i] = nptr[i];
		free(ptr);
		return (r);
	}
	return (ptr);
}
