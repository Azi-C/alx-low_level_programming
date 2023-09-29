#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: the value
 * @y: the power
 * Return: -1 if y < 0, or x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * (_pow_recursion(x,y - 1)));
}
