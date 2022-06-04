#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-starts here
 *Return:The return value is o every time it runs
 */
int main(void)
{
	char lc, e, q;

	e = 'e';
	q = 'q';
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != e && lc != q)
			putchar(lc);
	}
		printf("\n");

	return (0);
}
