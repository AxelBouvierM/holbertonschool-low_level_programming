#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: Pointer to first node
 * Return: The sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
