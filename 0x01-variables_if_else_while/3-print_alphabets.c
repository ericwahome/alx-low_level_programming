#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The program starts from here 
 *
 * Return: The return value is 0 every time it runs
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
		putchar('\n');

	return (0);
}
