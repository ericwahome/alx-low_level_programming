#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (m = 2; m < 50; m++)
	{
		fibonacci[m] = fibonacci[m - 1] + fibonacci[m - 2];
		if ((fibonacci[m] % 2) == 0 && fibonacci[m] < 4000000)
			sum += fibonacci[m];
	}
	printf("%ld\n", sum);

	return (0);
}
