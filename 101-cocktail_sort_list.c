#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in
 *                      ascending order.
 * Note: each time 2 elements are swapped, the array is printed
 * @list: a pointer to the head of the linked list listint_t
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *cur, *max = NULL, *min = *list;
	int swapped = 1;

	while (swapped)
	{
		swapped = 0;
		for (cur = min; cur->next != max; cur = cur->next)
		{
			if (cur->n > cur->next->n)
			{
				cur = cur->next;
				swap_nodes(&cur, list);
				swapped = 1;
				print_list(*list);
			}
		}

		if (!swapped)
			break;

		swapped = 0;
		max = cur;


		for (cur = max->prev; cur->prev != min; cur = cur->prev)
		{
			if (cur->n < cur->prev->n)
			{
				swap_nodes(&cur, list);
				cur = cur->next;
				swapped = 1;
				print_list(*list);
			}
		}
		min = cur->prev;
	}
}


/**
 * swap_nodes - This function swaps 2 nodes in a listint_t doubly linked list
 * @node: node to be swapped
 * @head: head of the list
 */

void swap_nodes(listint_t **node, listint_t **head)
{
	listint_t *tmp = *node, *pnp = (*node)->prev;

	if (pnp->prev)
		pnp->prev->next = tmp;
	else
		*head = tmp;
	pnp->next = tmp->next;
	tmp->prev = pnp->prev;
	pnp->prev = tmp;
	if (tmp->next)
		tmp->next->prev = pnp;
	tmp->next = pnp;
}
