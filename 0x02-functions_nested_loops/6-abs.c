#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @x: integer to be operated on.
 *
 * Return: Absolute value of x.
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
