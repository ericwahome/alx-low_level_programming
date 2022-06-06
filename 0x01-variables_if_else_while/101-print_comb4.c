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
	int m, r, q;

	for (m = '0'; m < '9'; m++)
	{
		for (r = m + 1; r <= '9'; r++)
		{
			for (q = r + 1; q <= '9'; q++)
			{
				if ((r != m) != q)
				{
					putchar(m);
					putchar(r);
					putchar(q);

					if (m == '7' && r == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
