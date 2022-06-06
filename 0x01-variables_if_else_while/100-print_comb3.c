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
int m;
for (m = 0; m < 90; m++)
 {		
for ()
 {
putchar((m / 10) + '0');
putchar((m % 10) + '0');
 }
if (m != 89)
 {
putchar(',');
putchar(' ');
 }	
 }
putchar('\n');
return (0);
 }
