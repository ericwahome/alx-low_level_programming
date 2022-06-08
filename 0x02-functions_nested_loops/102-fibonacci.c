#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (m = 2; m < 50; m++)
	{
		fibonacci[m] = fibonacci[m - 1] + fibonacci[m - 2];
		if (m == 49)
			printf("%ld\n", fibonacci[m]);
		else
			printf("%ld, ", fibonacci[m]);
	}

	return (0);
}
