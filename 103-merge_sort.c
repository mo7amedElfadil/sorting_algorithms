#include "sort.h"

/**
 * merge_sort - Sorts an array of integers in ascending order using
 *		The merge sort algorithm
 * Note: each time 2 elements are swapped, the array is printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 */

void merge_sort(int *array, size_t size)
{
	int *output = malloc(sizeof(int) * size);

	copying_arrays(array, output, 0, (int)size - 1);
	splitting(array, 0, size - 1, output);
	free(output);
}


/**
 * printing_sub - Prints sublists before and after getting merged
 *
 * @array: pointer to the array of integers to be sorted
 * @lo: the lower bound of the merged list
 * @hi: the higher bound of the merged list
 * @name: the string to be printed before the integers
 */

void printing_sub(int *array, int lo, int hi, char *name)
{
	int i;

	printf("[%s]: ", name);
	for (i = lo; i <= hi; i++)
	{
		if (i > lo)
			printf(", ");
		printf("%i", array[i]);
	}
	printf("\n");
}

/**
 * copying_arrays - Copying sublist of src to dest
 *
 * @src: the source of Copying
 * @dest: the destination of the Copying
 * @lo: the lower bound of the merged list
 * @hi: the higher bound of the merged list
 */

void copying_arrays(int *src, int *dest, int lo, int hi)
{
	int i;

	for (i = lo; i <= hi; i++)
		dest[i] = src[i];
}

/**
 * splitting - Splitting the array into sublists
 *
 * @array: the array to be sorted
 * @lo: the lower bound of the array to be sorted
 * @hi: the higher bound of the merged list
 * @output: the template of the array to be sorted
 */

void splitting(int *array, int lo, int hi, int *output)
{
	int mid;

	if (hi <= lo)
		return;
	mid = (hi + lo + 1) / 2;
	splitting(array, lo, mid - 1, output);
	splitting(array, mid, hi, output);
	merging(array, lo, mid, hi, output);
	copying_arrays(output, array, lo, hi);
}

/**
 * merging - Merging the two sublists together
 *
 * @array: the array to be sorted
 * @lo: the lower bound of the array to be sorted
 * @mid: the start of the second sublist
 * @hi: the higher bound of the merged list
 * @output: the template of the array to be sorted
 */

void merging(int *array, int lo, int mid, int hi, int *output)
{
	int i = lo, j = mid, k = lo;

	printf("Merging...\n");
	printing_sub(array, lo, mid - 1, "left");
	printing_sub(array, mid, hi, "right");
	while (i < mid && j <= hi)
	{
		if (array[i] <= array[j])
			output[k] = array[i], i++;
		else
			output[k] = array[j], j++;
		k++;
	}
	while (k <= hi)
	{
		if (i < mid)
			output[k] = array[i], i++;
		else
			output[k] = array[j], j++;
		k++;
	}
	printing_sub(output, lo, hi, "Done");
}
