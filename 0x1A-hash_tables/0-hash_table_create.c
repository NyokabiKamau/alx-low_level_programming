#include "hash_tables.h"

/**
 * hash_table_create - create a hash table 
 * @size: size of the array of the hash table 
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	
	if (size == 0)
		return (Null);

	ht = malloc(sizeof(hash_table_t));
	if (ht == 0)
		return (Null);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == Null)
		return (Null);

	return (ht);
}
