#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of listint_t
 * @head: pointer to addr of the head in listint_t
 * @n: The integer for the new node to contain.
 *
 * Return: if fails - NULL, else addr of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
