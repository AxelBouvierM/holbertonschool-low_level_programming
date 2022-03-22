#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at index of a list
 * @head: Pointer to first node
 * @index: Position of the node
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *aux;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	aux = *head;
	if (aux == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (aux->next == NULL)
		{
			return (-1);
		}
		aux = aux->next;
	}
	tmp = aux->next;
	aux->next = tmp->next;
	free(tmp);
	return (1);
}
