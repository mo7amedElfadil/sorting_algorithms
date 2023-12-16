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

/****** Bubble sort ******/
void bubble_sort(int *array, size_t size);

/****** Insertion sort ******/
void insertion_sort_list(listint_t **list);

/****** Selection sort ******/
void selection_sort(int *array, size_t size);

/****** Quick sort ******/
void quick_sort(int *array, size_t size);
int partition(int *array, int low, int high, size_t size);
void quick(int *array, int low, int high, size_t size);

/****** Shell sort ******/
void shell_sort(int *array, size_t size);

/****** Cocktail Shaker sort ******/
void cocktail_sort_list(listint_t **list);

/****** Counting sort ******/
void counting_sort(int *array, size_t size);
int find_max(int *array, size_t size);

/****** Merge sort ******/
void merge_sort(int *array, size_t size);

/****** Heap sort ******/
void heap_sort(int *array, size_t size);
void heapify(int *array, int n, int P, size_t size);
/*_____________ General Helper Functions _____________ */

/****** Array Helpers ******/
void print_array(const int *array, size_t size);
void swap_values(int *v1, int *v2);

/****** LinkedList Helpers ******/
void print_list(const listint_t *list);
listint_t *create_listint(const int *array, size_t size);
void swap_nodes(listint_t **node, listint_t **head);

#endif
