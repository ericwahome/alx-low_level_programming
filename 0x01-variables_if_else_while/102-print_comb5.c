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
int m, r;
for (m = 0; m <= 98; m++)
 {
for (r = m + 1; r <= 99; r++)
 {
putchar((m / 10) + '0');
putchar((r % 10) + '0');
putchar(' ');
putchar((r / 10) + '0');
putchar((r % 10) + '0');
if (m == 98 && r == 99)
continue;
putchar(',');
putchar(' ');
 }
 }
putchar('\n');
return (0);
}
