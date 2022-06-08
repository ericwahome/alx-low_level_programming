#include "main.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @m: An input integer value
 * Return: Returns zero
 */
void print_times_table(int m)
{
	int q, r;

	if (m > 0 && m < 15)
	{
		for (q = 0; q <= m; q++)
		{
			_putchar('0');
			for (r = 1; r <= m; r++)
				putformat(q * r;
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @m: number to format
 * Return: Retuns zero
 */
void putformat(int m)
{
	if (m <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(m + '0');
	}
	else if (m > 9 && m <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(m / 100 + '0');
		_putchar(m / 10 % 10 + '0');
		_putchar(m % 10 + '0');
	}
}
