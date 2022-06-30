#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int q, r;
	int *a;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	a = malloc(sizeof(int) * r);
	if (a == NULL)
		return (NULL);
	for (q = 0; q < r; q++, min++)
	{
		a[q] = min;
	}
	return (a);
}
