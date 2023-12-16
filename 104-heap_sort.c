#include "sort.h"

/**
 * heap_sort - Sorts an array of integers in ascending order using
 *		The sift-down heap sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i, n = (int)size;

	for (i = n / 2; i >= 0; i--)
		heapify(array, n, i, size);
	for (i = n - 1; i > 0; i--)
	{
		swap_values(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, i, 0, size);
	}

}

/**
 * heapify - Builds the maxheap using the sift-down heap sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @n: limit of unsorted subarray
 * @P: index of parent node
 * @size: size of the array
 */
void heapify(int *array, int n, int P, size_t size)
{
	int max, l, r;

	max = P;
	l = P * 2 + 1;
	r = l + 1;

	if (l < n && array[l] > array[max])
		max = l;
	if (r < n && array[r] > array[max])
		max = r;
	if (max != P)
	{
		swap_values(&array[max], &array[P]);
		print_array(array, size);
		heapify(array, n, max, size);
	}
}

/**
 * swap_values - This function swaps values in the array
 *
 * @v1: a pointer to the value to be swapped
 * @v2: a pointer to the value to be swapped
 */

void swap_values(int *v1, int *v2)
{
	int x;

	x = *v1;
	*v1 = *v2;
	*v2 = x;
}
