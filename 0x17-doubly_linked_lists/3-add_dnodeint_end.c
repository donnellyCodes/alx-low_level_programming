#include "lists.h"
/**
 * add_dnodeint_end -  adds node at the end of list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*allocate memory for the new node*/
	dlistint_t *current = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*assign value to new node*/
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}
