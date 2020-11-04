#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: A pointer to head node
 * @idx: index
 * @n: data
 *
 * Return: If the function fails - NULL
 * Otherwise the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *cp = *head;
	unsigned int a;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = cp;
		*head = newNode;
		return (newNode);
	}

	for (a = 0; a < (idx - 1); a++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}

	newNode->next = cp->next;
	cp->next = newNode;

	return (newNode);
}
