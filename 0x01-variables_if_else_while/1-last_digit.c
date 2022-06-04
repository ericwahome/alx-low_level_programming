#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -This is the  Execution starting point
 *
 * Return: Always o when the running suceeds
 */
int main(void)
{
	int n;
	int Lst;
	char sng[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lst = n % 10;

	if (Lst > 5)
		printf("%s %d is %d and is greater than 5\n", sng, n, Lst);
	else if (Lst == 0)
		printf("%s %d is %d and is 0\n", sng, n, Lst);
	else if (Lst < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", sng, n, Lst);

	return (0);
}
