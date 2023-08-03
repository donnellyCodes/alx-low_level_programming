#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - function to print a linked list safely
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;
	int is_loop = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			is_loop = 1;
			break;
		}
	}
	if (is_loop)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
