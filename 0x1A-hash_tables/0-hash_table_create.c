#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp = NULL;
	unsigned long int count = 0;

	if (size == 0)
		return (NULL);
	tmp = malloc(sizeof(hash_table_t));
	if (tmp == NULL)
		return (NULL);

	tmp->size = size;
	tmp->array = malloc(sizeof(hash_node_t *) * size);

	if (tmp->array == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		tmp->array[count] = NULL;
	}
	return (tmp);
}
