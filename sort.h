#ifndef SORT_H
#define SORT_H


/*________ Library Includes ________*/
#include <stdlib.h>
#include <stdio.h>




/*________ Data Structures ________*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;




/*________ Function Prototypes ________*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


/*_____________ Helper Functions _____________ */
void swap_values(int *v1, int *v2);

void swap_nodes(listint_t **node, listint_t **head);
listint_t *create_listint(const int *array, size_t size);

int partition(int *array, int low, int high, size_t size);
void quick(int *array, int low, int high, size_t size);
#endif
