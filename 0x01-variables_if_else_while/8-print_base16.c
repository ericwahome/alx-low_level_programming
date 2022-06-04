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
	char loow;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (loow = 'a'; loow <= 'f'; loow++)
		putchar(loow);
		putchar('\n');

	return (0);
}
