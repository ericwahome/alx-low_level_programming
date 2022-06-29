#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @abso: integer input
 * Return: absolute value of abso
 */
int _abs(int abso)
{
	return (abso * ((abso > 0) - (abso < 0)));
}
