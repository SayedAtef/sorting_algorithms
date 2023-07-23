#include "sort.h"
listint_t *swap(listint_t *node, listint_t **list);

/**
 * insertion_sort_list - function that sorts a doubly linked list
 *
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if ((*list)->next == NULL || list == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		while ((current->prev) && (current->n < current->prev->n))
		{
			current = swap(current, list);
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap - swap a current node with previous
 * @node: node
 * @list: node list
 *
 * Return: return a pointer to swapped node
 */
listint_t *swap(listint_t *node, listint_t **list)
{
	listint_t *previous = node->prev;
	listint_t *curr = node;

	previous->next = curr->next;
	if (curr->next)
		curr->next->prev = previous;
	curr->next = previous;
	curr->prev = previous->prev;
	previous->prev = curr;
	if (curr->prev)
		curr->prev->next = curr;
	else
		*list = curr;

	return (curr);
}
