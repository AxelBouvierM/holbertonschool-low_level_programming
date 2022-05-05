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
	unsigned int i;

	tmp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (tmp != NULL && tmp->prev != NULL)
	{
		tmp = tmp->prev;
		*h = (*h)->prev;
	}
	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp	== NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (tmp->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = tmp;
		tmp->next = new_node;
	} 
	else
	{
		new_node->next = tmp->next;
		new_node->prev = tmp;
		tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	return (new_node);
}
