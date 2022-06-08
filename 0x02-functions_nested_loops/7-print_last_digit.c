#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int lst;

	lst = (nld % 10);

	if (lst < 0)
	{
		lst = (-1 * lst);
	}

	_putchar(lst + '0');
	return (lst);
}
