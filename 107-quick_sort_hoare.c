#include "sort.h"

/**
 * quick_sort_hoare - Sorts an array of integers in ascending order using
 *		The quick sort algorithm and implementing the Haore partitioning scheme
 * Note: each time 2 elements are swapped, the array is printed
 *	 The pivot will always be the last element of the partition being sorted
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	quick_hoare(array, 0, (int)size - 1, size);
}

/**
 * quick_hoare - This function sorts the list according to
 *				the quick sort algorithm
 * @array: pointer to the array of integers to be sorted
 * @low: the lowest bound of the array
 * @high: the highest bound of the array
 * @size: the size of the array
 */

void quick_hoare(int *array, int low, int high, size_t size)
{
	int n;

	if (low >= high)
		return;
	n = partition_hoare(array, low, high, size);
	quick_hoare(array, low, n - 1, size);
	quick_hoare(array, n + 1, high, size);
}

/**
 * partition_hoare - This function places the pivot in it's correct position
 *
 * @array: pointer to the array of integers to be sorted
 * @low: the lowest bound of the array
 * @high: the highest bound of the array
 * @size: the size of the array
 *
 * Return: the index of the of the pivot.
 */

int partition_hoare(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	i = low - 1;
	j = high + 1;
	pivot = array[high];
	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] >= pivot);
		if (i >= j)
		{
			swap_values(&array[i], &array[high]);
			print_array(array, size);
			return (i);
		}
		swap_values(&array[i], &array[j]);
		print_array(array, size);
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
	int x;

	x = *v1;
	*v1 = *v2;
	*v2 = x;
}
