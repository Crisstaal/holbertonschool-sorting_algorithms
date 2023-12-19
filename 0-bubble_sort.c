#include "sort.h"

/**
 * swap_ints - swaps integers in an array
 *
 * @a: first integer
 * @b: second integer
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort an array in ascending order
 * @array: array
 * @size: size
 */

