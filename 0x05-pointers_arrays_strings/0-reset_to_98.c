#include "main.h"
#include <stdio.h>

/**
 * void reset_to_98 - resets the value to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    int n;
    n = 402;
	int *p = &n;
    _putchar(n);
	_putchar ("\n"
    *p = 98;
    _putchar(n);
    return (0);
}
