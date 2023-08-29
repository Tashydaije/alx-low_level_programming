#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: pointer to addr of the head in listint_t
 *
 * Return: 0 if listint_T is empty else, head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
