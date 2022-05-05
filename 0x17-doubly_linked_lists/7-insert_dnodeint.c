#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to first node
 * @idx: Index
 * @n: Elements of the list
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = *h;
	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h == NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
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
	new_node->prev = tmp;
	new_node->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = new_node;
	}
	tmp->next = new_node;
	return (new_node);
}
