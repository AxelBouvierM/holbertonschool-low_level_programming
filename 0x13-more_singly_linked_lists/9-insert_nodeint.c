#include "lists.h"
/**
 * insert_nodeint_at_index - Function that insert a new node at given position
 * @head: Pointer to pointer that scope to fisrt node
 * @idx: Index
 * @n: Integers that pass
 * Return: The adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int count = 1;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	while (count < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
		count++;
	}
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (tmp);
}
