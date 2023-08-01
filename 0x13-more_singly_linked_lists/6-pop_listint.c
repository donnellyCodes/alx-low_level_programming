#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node of the list
 * @head: pointer to pointer to the head of the list
 * Return: the data of head nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
