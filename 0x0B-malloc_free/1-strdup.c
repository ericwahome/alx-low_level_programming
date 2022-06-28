#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function copies a string
 * @str: string to copy
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int g, h;
	char *s;

	if (str == NULL)
		return (NULL);
	for (g = 0; str[g]; g++)
		;
	g++;
	s = malloc(g * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < g; h++)
	{
		s[h] = str[h];
	}
	return (s);
}
