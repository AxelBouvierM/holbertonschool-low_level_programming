#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int count = 0;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	while (count < ht->size)
	{
		tmp = ht->array[count];
		while (tmp != NULL)
		{
			printf("%s", sep);
			printf("'%s': '%s'", tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
		count++;
	}
	printf("}\n");
}
