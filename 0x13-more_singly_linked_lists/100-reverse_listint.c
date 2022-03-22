#include "lists.h"
/**
 * reverse_listint - Function that print in reverse a list
 * @head: Pointer to first node
 * Return: Pointer to the first node of the reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *aux;

	tmp = NULL;
	while (*head != NULL)
	{
		aux = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = aux;
	}
	*head = tmp;
	return (*head);
}
