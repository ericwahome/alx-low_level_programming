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
for (lc = 'z'; lc >= 'a'; lc--)
putchar(lc);
putchar('\n');
return (0);
}
