#include "sort.h"


/**
 * counting_sort - Sorts an array of integers in ascending order using
 *		 The counting sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */

void counting_sort(int *array, size_t size)
{
	int i, max, *count_array, *output_array;

	max = find_max(array, size) + 1;
	count_array = malloc(sizeof(int) * (max));
	output_array = malloc(sizeof(int) * size);
	for (i = 0; i < max; i++)
		count_array[i] = 0;
	for (i = 0; i < (int)size; i++)
	{
		output_array[i] = array[i];
		count_array[array[i]]++;
	}
	for (i = 1; i < max; i++)
		count_array[i] += count_array[i - 1];
	print_array(count_array, max);
	for (i = 0; i < (int)size; i++)
	{
		array[count_array[output_array[i]] - 1] = output_array[i];
		count_array[output_array[i]]--;
	}
	free(count_array), free(output_array);
}

/**
 * find_max - Finds the max value of an array
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * Return: max value
 */
int find_max(int *array, size_t size)
{
	int i, max = array[0];

	for (i = 1; i < (int)size; i++)
	{
		if (array[i] > max)
			max =  array[i];
	}
	return (max);
}
