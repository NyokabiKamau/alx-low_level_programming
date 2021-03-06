#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: gives detailed information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for type struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
