#include "main.h"

/**
* _strcpy - copy string pntd to by src including \0 to the buffer pntd by dest
* @dest: pointer to string to be copied to
* @src: pointer to string to be copied
*
* Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
