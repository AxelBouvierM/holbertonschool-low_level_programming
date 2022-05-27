#include "hash_tables.h"
/**
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *aux;
	unsigned long int count = 0;
	
	if (ht == NULL)
		return;
	while (count < ht->size)
	{
		tmp = ht->array[count];
		if (ht->array[count] != NULL)
		{
			while (tmp != NULL)
			{
				aux = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = aux;
			}
		}
		count++;
	}
	free(ht->array);
	free(ht);
}
