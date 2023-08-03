#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to a pointer to the head of the list
 * Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
