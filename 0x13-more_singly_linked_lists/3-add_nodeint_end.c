#include "lists.h"

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: pointer to the head node
 * @n: data
 *
 * Return: head on success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	temp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}
