#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @chr: single letter input
 * Return: 1 if chr is a letter (lower or uppercase), 0 if not
 */
int _isalpha(int chr)
{
	if (((chr >= 'a') && (chr <= 'z')) || ((chr >= 'A') && (chr <= 'Z')))
		return (1);
	else
		return (0);
}
