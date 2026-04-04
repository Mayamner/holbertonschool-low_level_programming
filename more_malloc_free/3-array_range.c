#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
