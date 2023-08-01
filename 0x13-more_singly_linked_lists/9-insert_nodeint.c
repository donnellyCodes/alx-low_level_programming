#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function to insert a new node
 * @head: pointer to pointer to the head of the list
 * @idx: index of the new node, starts at 0
 * @n: value to be inserted
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	/* To create new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* Incase new node is added */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	/* if index is not in range */
	if (current == NULL || count != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
