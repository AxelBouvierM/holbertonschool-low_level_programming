#include "lists.h"
/**
 * free_listint - Function that free a list
 * @head: Pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
