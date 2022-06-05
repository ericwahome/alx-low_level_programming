#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Start point
 *
 * Return: returns 0 on success
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);
for (lc = 'A'; lc <= 'Z'; lc++)
putchar(lc);
putchar('\n');
return (0);
}
