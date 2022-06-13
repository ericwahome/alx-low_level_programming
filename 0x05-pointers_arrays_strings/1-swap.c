include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @r: input 1
 * @s: input 2
 * Return: integers
 */
void swap_int(int *r, int *s)
{
	int n;

	n = *r;
	*r = *s;
	*s = n;
}
