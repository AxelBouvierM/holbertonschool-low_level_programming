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
	unsigned int count = 0;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (count = 0; count < (idx - 1); count++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
