#include "main.h"
/**
 * _pow_recursion - to return the super script of a given No
 *
 * @x: input No
 * @y: super script of x
 * Return: the result of x and y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
