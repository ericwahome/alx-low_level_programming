#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @m: number input
 * Return: 1 prints '+' if m > 0, 0 prints '0' if m = 0, -1 prints '-' if m < 0
 */
int print_sign(int m)
{
	if (m > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
