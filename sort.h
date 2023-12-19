#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of boolean values
 * @false: equals 0
 * @true: equals 1
 */

typedef enum bool
{
	false = 0;
	true
} bool;

/**
 * struct listin_s - doubly linked list
 * @n: integer
 *
 * @prev: pointer
 * @next: pointer
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif
