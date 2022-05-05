#include "lists.h"
/**
 * free_dlistint - Function that free a list
 * @head: Pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
