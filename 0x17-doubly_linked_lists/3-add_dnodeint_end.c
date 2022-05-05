#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a list
 * @head: Pointer to first node
 * @n: Elements of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
		new_node->prev = tmp;

	}
	return (new_node);
}
