#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using
 *		The shell sort algorithm
 * Note: each time the interval decreases, the array gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	int i, j, gap;

	gap = 1;
	while (gap < (int)size)
		gap = gap * 3 + 1;
	gap /= 3;
	for (; gap > 0; gap /= 3)
	{
		for (j = gap; j < (int)size; j++)
		{
			if (array[j] < array[j - gap])
			{
				i = j;
				while (i - gap >= 0 && array[i] < array[i - gap])
				{
					swap_values(&array[i], &array[i - gap]);
					i -= gap;
				}
			}
		}
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
