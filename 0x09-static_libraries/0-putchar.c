#include "main.h"

/**
 * main - Starts here
 * prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char wrd[8] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
		_putchar(wrd[m]);
	_putchar('\n');

	return (0);
}
