#include "sort.h"

/**
 * radix_sort - Sorts an array of integers in ascending order using
 *              The radix sort algorithm
 * Note: each time the significant digit is increased, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */

void radix_sort(int *array, size_t size)
{
	int i, pwr = 1, radix = 0, max;

	if (size <= 1)
		return;
	max = find_max(array, size);
	do {
		max /= 10;
		radix++;
	} while (max > 0);
	for (i = 0; i < radix; i++, pwr *= 10)
	{
		bucket_sort(array, size, pwr);
		print_array(array, size);
	}
}

/**
 * bucket_sort - Sorts an array of integers in ascending order using
 *		 The radix/bucket sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @pwr: the exponent
 */

void bucket_sort(int *array, size_t size, int pwr)
{
	int i, *count_array, *input_array;

	count_array = malloc(sizeof(int) * (10));
	if (!count_array)
		return;
	input_array = malloc(sizeof(int) * size);
	if (!input_array)
		return;
	for (i = 0; i < 10; i++)
		count_array[i] = 0;
	for (i = 0; i < (int)size; i++)
	{
		input_array[i] = array[i];
		count_array[(array[i] / pwr) % 10]++;
	}
	for (i = 1; i < 10; i++)
		count_array[i] += count_array[i - 1];
	for (i = (int)size - 1; i >= 0; i--)
	{
		array[count_array[(input_array[i] / pwr) % 10] - 1] = input_array[i];
		count_array[(input_array[i] / pwr) % 10]--;
	}
	free(count_array), free(input_array);
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
