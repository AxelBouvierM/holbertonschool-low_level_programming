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
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i != (idx - 1))
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	tmp->next->prev = new_node;

	return (new_node);
}
