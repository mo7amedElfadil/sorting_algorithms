#include "sort.h"

/**
 * bitonic_sort - Sorts an array of integers in ascending order using
 *		The bitonic sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */

void bitonic_sort(int *array, size_t size)
{
	bit_sort(array, 0, (int)size, 1, size);
}


/**
 * printing_bitonic - Prints sublists before and after getting merged
 * @array: pointer to the array of integers to be sorted
 * @lo: the lower bound of the merged list
 * @len: length of sublist
 * @size: size of the array
 * @name: the string to be printed before the integers
 * @dir: the string describing direction of merge
 */

void printing_bitonic(int *array, int lo, int len,
		size_t size, char *name, int dir)
{
	int i;
	char *direction = dir ? "UP" : "DOWN";

	printf("%s [%i/%lu] (%s):\n", name, len, size, direction);
	for (i = lo; i < lo + len; i++)
	{
		if (i > lo)
			printf(", ");
		printf("%i", array[i]);
	}
	printf("\n");
}

/**
 * bit_sort - Splitting the array into sublists
 * @array: the array to be sorted
 * @lo: the lower bound of the array to be sorted
 * @len: length of sublist
 * @dir: direction of sort, 1 for ascending. 0 for descending
 * @size: size of the array
 */

void bit_sort(int *array, int lo, int len, int dir, size_t size)
{
	int mid;

	if (len <= 1)
		return;
	mid = len / 2;
	printing_bitonic(array, lo, len, size, "Merging", dir);
	bit_sort(array, lo, mid, 1, size);
	bit_sort(array, lo + mid, mid, 0, size);
	bitonic_merge(array, lo, len, dir);
	printing_bitonic(array, lo, len, size, "Result", dir);
}

/**
 * bitonic_merge - Merging the two sublists together
 * @array: the array to be sorted
 * @lo: the lower bound of the array to be sorted
 * @len: length of sublist
 * @dir: direction of sort, 1 for ascending. 0 for descending
 */

void bitonic_merge(int *array, int lo, int len, int dir)
{
	int i, mid;

	if (len <= 1)
		return;
	mid = len / 2;
	for (i = lo; i < lo + mid; i++)
	{
		if ((array[i] > array[i + mid]) == dir)
			swap_values(&array[i], &array[i + mid]);
	}
	bitonic_merge(array, lo, mid, dir);
	bitonic_merge(array, lo + mid, mid, dir);
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
