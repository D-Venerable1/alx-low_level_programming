#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: a pointer to the newly created array
 * or NULL if an error occurred
 */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
