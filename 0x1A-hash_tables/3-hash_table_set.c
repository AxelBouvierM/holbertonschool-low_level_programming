#include "hash_tables.h"
/**
 * hash_table_set - function that retrieves a value associated with a key
 * @ht: struct
 * @key: Contain key
 * @value: Contain value
 * Return: value associated with the element or NULL if key couldn’t be found
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *aux = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);

	tmp->key = (char *)strdup(key);
	tmp->value = (char *)strdup(value);
	tmp->next = NULL;
	if (tmp->value == NULL || tmp->key == NULL)
	{
		free(tmp), free(tmp->value), free(tmp->key);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = tmp;
		tmp->next = NULL;
		return (1);
	}

	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(tmp->key), free(tmp->value), free(tmp);
			ht->array[index]->value = (char *)value;
			return (1);
		}
		aux = aux->next;
	}
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
