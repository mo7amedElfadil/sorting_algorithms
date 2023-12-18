#include "deck.h"

/**
 * sort_deck - Sorts a doubly linked list of cards in ascending
 *             order from Ace to King and from Spade to Diamond.
 * @deck: pointer to the head of the doubly linked list to be sorted
 */

void sort_deck(deck_node_t **deck)
{
	sort_value(deck);
	sort_suit(deck);
}

/**
 * sort_suit - Sorts a doubly linked list of cards in ascending
 *             order according to value from Spade to Diamond.
 * @deck: pointer to the head of the doubly linked list to be sorted
 */

void sort_suit(deck_node_t **deck)
{
	deck_node_t *cur, *sort;

	if (!deck || !*deck || !(*deck)->next)
		return;
	cur = (*deck)->next;
	while (cur)
	{
		if (cur->card->kind < cur->prev->card->kind)
		{
			sort = cur;
			cur = cur->prev;
			while (sort && sort->prev && sort->card->kind
					< sort->prev->card->kind)
				swap_cards(&sort, deck);
		}
		cur = cur->next;
	}
}

/**
 * sort_value - Sorts a doubly linked list of cards in ascending
 *             order according to value from Ace to King.
 * @deck: pointer to the head of the doubly linked list to be sorted
 */

void sort_value(deck_node_t **deck)
{
	deck_node_t *cur, *sort;

	if (!deck || !*deck || !(*deck)->next)
		return;
	cur = (*deck)->next;
	while (cur)
	{
		if (h_card_value(cur->card->value) < h_card_value(cur->prev->card->value))
		{
			sort = cur;
			cur = cur->prev;
			while (sort && sort->prev && h_card_value(sort->card->value)
					< h_card_value(sort->prev->card->value))
				swap_cards(&sort, deck);
		}
		cur = cur->next;
	}
}

/**
 * swap_cards - This function swaps 2 nodes in a deckint_t doubly linked deck
 * @node: node to be swapped
 * @head: head of the deck
 */

void swap_cards(deck_node_t **node, deck_node_t **head)
{
	deck_node_t *tmp = *node, *pnp = (*node)->prev;

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

/**
 * h_card_value - Hash the card value in order
 * @s: is the value of the card that needs to be sorted
 * Return: hashed value from Ace - King Ascending Order
 */
int h_card_value(const char *s)
{
	int h = 0;

	while (*s)
	{
		h = (31 * h + *s++);
	}
	h = h % 10000;
	h = h > 1500 && h < 8000 ? h % 100 : h;
	h = h > 8000 ? h / 8 : h;
	h = h > 900 ? h / 10 : h;
	return (h);
}
