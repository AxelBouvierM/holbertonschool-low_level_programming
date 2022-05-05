#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to first node
 * @n: Elements of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new_struct = malloc(sizeof(dlistint_t));

	if (new_struct == NULL)
	{
		return (NULL);
	}
	new_struct->n = n;
	new_struct->prev = NULL;
	new_struct->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_struct;
	}
	*head = new_struct;
	return (new_struct);
}
