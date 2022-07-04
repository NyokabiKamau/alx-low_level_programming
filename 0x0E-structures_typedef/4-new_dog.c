#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *new_dog - function that creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nname, nowner;
	dog_t *ndog;

	nname = nowner = 0;
	while (name[nname++])
		;
	while (owner[nowner++])
		;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(nname * sizeof(ndog->name));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; i < nname; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	ndog->owner = malloc(nowner * sizeof(ndog->owner));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; i < nowner; i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}
