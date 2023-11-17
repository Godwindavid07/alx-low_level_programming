#include "main.h"
/**
 * factorial - to return factorial of a number
 *
 * @n: given number
 *
 * Return: -1 for error and 0 for success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
