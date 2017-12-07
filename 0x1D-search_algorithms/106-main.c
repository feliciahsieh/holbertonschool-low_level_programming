#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	skiplist_t *list, *res;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_skiplist(array, size);
	print_skiplist(list);

	res =  linear_skip(list, 53);
	printf("Found %d at index: %lu\n\n", 53, res->index);
	res =  linear_skip(list, 2);
	printf("Found %d at index: %lu\n\n", 2, res->index);
	res =  linear_skip(list, 999);
	printf("Found %d at index: %p\n\n", 999, (void *) res);

	printf("MY TESTING\n");
	res =  linear_skip(NULL, 2);
	printf("Found %d at index: %p\n\n", 2, (void *) res);
	res =  linear_skip(list, -1);
	printf("Found %d at index: %p\n\n", -100, (void *) res);

	printf("ALL VALUES\n");
	res =  linear_skip(list, 0);
	printf("Found %d at index: %lu\n\n", 0, res->index);
	res =  linear_skip(list, 1);
	printf("Found %d at index: %lu\n\n", 1, res->index);
	res =  linear_skip(list, 2);
	printf("Found %d at index: %lu\n\n", 2, res->index);
	res =  linear_skip(list, 3);
	printf("Found %d at index: %lu\n\n", 3, res->index);
	res =  linear_skip(list, 4);
	printf("Found %d at index: %lu\n\n", 4, res->index);
	res =  linear_skip(list, 7);
	printf("Found %d at index: %lu\n\n", 7, res->index);
	res =  linear_skip(list, 12);
	printf("Found %d at index: %lu\n\n", 12, res->index);
	res =  linear_skip(list, 15);
	printf("Found %d at index: %lu\n\n", 15, res->index);
	res =  linear_skip(list, 18);
	printf("Found %d at index: %lu\n\n", 18, res->index);
	res =  linear_skip(list, 19);
	printf("Found %d at index: %lu\n\n", 19, res->index);
	res =  linear_skip(list, 23);
	printf("Found %d at index: %lu\n\n", 23, res->index);
	res =  linear_skip(list, 53);
	printf("Found %d at index: %lu\n\n", 53, res->index);
	res =  linear_skip(list, 61);
	printf("Found %d at index: %lu\n\n", 61, res->index);
	res =  linear_skip(list, 62);
	printf("Found %d at index: %lu\n\n", 62, res->index);
	res =  linear_skip(list, 76);
	printf("Found %d at index: %lu\n\n", 76, res->index);
	res =  linear_skip(list, 99);
	printf("Found %d at index: %lu\n\n", 99, res->index);

	free_skiplist(list);
	return (EXIT_SUCCESS);
}
