#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Retuns the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int m, cnt;

	cnt = 0;

	while (cnt < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		cnt++;
		_putchar('\n');
	}
}
