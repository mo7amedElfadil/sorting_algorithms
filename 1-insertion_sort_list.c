#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *						 order using the insertion sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @list: pointer to the head of the doubly linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *sort;

	if (!list || !*list || !(*list)->next)
		return;
	cur = (*list)->next;
	while (cur)
	{
		if (cur->n < cur->prev->n)
		{
			sort = cur;
			cur = cur->prev;
			while (sort && sort->prev && sort->n < sort->prev->n)
			{
				swap_nodes(&sort, list);
				print_list(*list);
			}
		}
		cur = cur->next;
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

