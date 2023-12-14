#include "sort.h"
#include <stddef.h>
/**
 * selection_sort - Sorts an array of integers in ascending order using
 *		The selection sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap_values(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
