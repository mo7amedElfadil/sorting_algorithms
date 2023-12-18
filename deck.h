#ifndef DECK_H
#define DECK_H


/*________ Library Includes ________*/

#include <stdlib.h>
#include <stdio.h>

/**
 * enum kind_e - The suite
 * @SPADE: 0
 * @HEART: 1
 * @CLUB: 2
 * @DIAMOND: 3
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/*________ Data Structures ________*/

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

/*________ Function Prototypes ________*/

void sort_deck(deck_node_t **deck);
void swap_cards(deck_node_t **node, deck_node_t **head);
int h_card_value(const char *s);
void sort_suit(deck_node_t **deck);
void sort_value(deck_node_t **deck);

#endif
