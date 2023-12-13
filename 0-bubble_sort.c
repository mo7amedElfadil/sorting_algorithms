#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *		The bubble sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;

	for (i = 1; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_values(&array[j], &array[j + 1]);
				print_array(array, size);
				swap = 1;
			}
		}
		if (!swap)
			break;
	}
}

/**
 * swap_values - This function swaps values in the array
 *
 * @v1: a pointer to the value to be swapped
 * @v2: a pointer to th value to be swapped
 */

void swap_values(int *v1, int *v2)
{
	*v1 = *v1 + *v2;
	*v2 = *v1 - *v2;
	*v1 = *v1 - *v2;
}
