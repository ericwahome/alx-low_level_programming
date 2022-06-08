#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 5) == 0 || (m % 3) == 0)
			sum += m;
	}
	printf("%d\n", sum);

	return (0);
}
