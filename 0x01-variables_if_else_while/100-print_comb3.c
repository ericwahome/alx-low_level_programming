#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starts here
 *
 * Return: is 0 on success
 */
int main(void)
{
	int m, q;

	for (m = '0'; m < '9'; m++)
	{
		for (q = m + 1; q <= '9'; q++)
		{
			if (q != m)
			{
				putchar(m);
				putchar(q);

				if (m == '8' && q == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
