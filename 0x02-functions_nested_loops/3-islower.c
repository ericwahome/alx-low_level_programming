#include "main.h"

/**
 * _islower - checks for lowercase character
 * @chr: single letter input
 * Return: 1 if int chr is lowercase, 0 if not the case
 */
int _islower(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		return (1);
	else
		return (0);
}
