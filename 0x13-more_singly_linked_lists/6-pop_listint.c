#include "lists.h"
/**
 * pop_listint - function deletes the head node
 * @head: the pointer to the head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (*head == NULL)
	{
		return (0);
	}

	a = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (a);
}
