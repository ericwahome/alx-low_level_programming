#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function creates a 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: returns a double pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int u, v;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (u = 0; u < height; u++)
	{
		a[u] = (int *)malloc(sizeof(int) * width);
		if (a[u] == NULL)
		{
			for (v = 0; v < u; v++)
				free(a[v]);
			free(a);
			return (NULL);
		}
		for (v = 0; v < width; v++)
		{
			a[u][v] = 0;
		}
	}
	return (a);
}
