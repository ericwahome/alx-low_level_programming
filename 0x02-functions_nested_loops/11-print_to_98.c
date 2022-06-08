#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from m to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @m: number input
 * Return: Always 0 on run
 */
void print_to_98(int m)
{
	if (m < 98)
	{
		while (m <= 98)
		{
			printf("%d", m);
			if (m != 98)
			{
				printf(", ");
			}
			m++;
		}
	}
	else if (m > 98)
	{
		while (m >= 98)
		{
			printf("%d", m);
			if (m != 98)
			{
				printf(", ");
			}
			m--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
