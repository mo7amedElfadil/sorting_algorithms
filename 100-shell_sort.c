#include "sort.h"

/**
 * shell - Sorts an array of integers in ascending order using
 *		The shell sort algorithm and implementing the Knuth sequence
 * Note: each time the gap is reduced, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{

}

/**
 * swap_values - This function swaps values in the array
 *
 * @v1: a pointer to the value to be swapped
 * @v2: a pointer to th value to be swapped
 */

void swap_values(int *v1, int *v2)
{
	int x;

	x = *v1;
	*v1 = *v2;
	*v2 = x;
}
