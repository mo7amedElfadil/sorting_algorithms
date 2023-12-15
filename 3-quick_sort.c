#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *		The quick sort algorithm and implementing the Lomuto partitioning scheme
 * Note: each time 2 elements are swapped, the array is printed
 *	 The pivot will always be the last element of the partition being sorted
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, (int)size - 1, size);
}

/**
 * quick - This function sorts the list according to the quick sort algorithm
 *
 * @array: pointer to the array of integers to be sorted
 * @low: the lowest bound of the array
 * @high: the highest bound of the array
 * @size: the size of the array
 */

void quick(int *array, int low, int high, size_t size)
{
	int n;

	if (low > high)
		return;
	n = partition(array, low, high, size);
	quick(array, low, n - 1, size);
	quick(array, n + 1, high, size);
}

/**
 * partition - This function places the pivot in it's correct position
 *
 * @array: pointer to the array of integers to be sorted
 * @low: the lowest bound of the array
 * @high: the highest bound of the array
 * @size: the size of the array
 *
 * Return: the index of the of the pivot.
 */

int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	i = low - 1;
	pivot = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap_values(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] != array[high])
	{
		swap_values(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
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
