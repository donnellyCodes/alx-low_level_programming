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
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current <= current->next && loop_node == NULL)
		{
			loop_node = current;
			while (loop_node->next != current)
			{
				loop_node = loop_node->next;
				count++;
				printf("[%p] %d\n", (void *)loop_node, loop_node->n);
			}
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
