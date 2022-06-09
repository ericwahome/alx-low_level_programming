#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int m = 1;

	for (; m < 100 ; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
			printf("FizzBuzz ");
		else if (m % 3 == 0)
			printf("Fizz ");
		else if (m % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
