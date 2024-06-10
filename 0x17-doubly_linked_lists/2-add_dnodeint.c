#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: pointer to head of a list
 * @n: value of new node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*allocate memory of new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/*assign value of new node*/
	new_node->n = n;
	/*set prev pointer to NULL*/
	new_node->prev = NULL;
	/*set next pointer to head*/
	new_node->next = *head;

	if (*head != NULL)
		/*update prev pointer of the current head*/
		(*head)->prev = new_node;
	/*update the head to point new node*/
	*head = new_node;
	return (new_node);
}
