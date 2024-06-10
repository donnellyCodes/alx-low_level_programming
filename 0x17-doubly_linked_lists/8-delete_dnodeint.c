#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *tmp NULL, *aux = NULL;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; tmp && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	aux = tmp->next->next;
	free(tmp->next);
	tmp->next = aux;
	if (tmp->next)
		tmp->next->prev = tmp;
	return (1);
}
