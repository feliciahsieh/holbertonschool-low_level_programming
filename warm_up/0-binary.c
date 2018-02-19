#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print array
 * @array: sorted array of integers
 * Return: None
 */
void print_array(int *array, size_t start, size_t end)
{
  size_t i;

  printf("Searching in array: ");
  for (i = start; i < end - 1; i++) {
    printf("%d, ", array[i]);
  }
  printf("%d\n", array[i]);
}


/**
 * binarySearch - wrapper for binary_search
 * @array: sorted array of integers
 * @start: start index to search
 * @end: end index to search
 * @value: target value to search for
 * Return: -1 if not found or array is NULL. Otherwise, return index
 */
int binarySearch(int *array, size_t start, size_t end, int value)
{
  size_t mid = 0;
  int index = -1;

  mid = (end + start) / 2;

  printf("binarySearch: start: %lu  end: %lu  mid: %lu\n", start, end, mid);

  if (array[mid] == value) {
    printf("****I FOUND IT****\n");
    return mid;
  }
  if (start >= end)
    return -1;

  print_array(array, start, end);

  /* check left half */
  index = binarySearch(array, start, mid, value);

  /* check right half */
  if (index == -1)
    index = binarySearch(array, mid + 1, end, value);

  return (index);
}


/**
 * binary_search - search for value in sorted array using Binary Search
 * @array: sorted array of integers
 * @size: size of array
 * @value: target value to search for
 * Return: -1 if not found or array is NULL. Otherwise, return index
 */
int binary_search(int *array, size_t size, int value)
{
  size_t mid = 0;
  int index = -1;

  if (array == NULL)
    return -1;

  print_array(array, 0, size);

  mid = size / 2;
  if (array[mid] == value) {
    return mid;
  } else {
    index = binarySearch(array, 0, size, value);
  }

  return (index);
}
