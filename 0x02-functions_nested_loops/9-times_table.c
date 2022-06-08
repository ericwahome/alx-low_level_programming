#include "main.h"
/**
 * times_table -  prints the 9 times table, starting from 0 
 * Return: times table
 * also adds extra spacea at the end
 */
void times_table(void)
{
	int roow, colm, m;

	for (roow = 0; roow <= 9; roow++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colm = 1; colm <= 9; colm++)
		{
			m = (roow * colm);
			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');

			if (colm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
