#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Starts here
 *
 *Return:The return value is 0 every time it runs
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
