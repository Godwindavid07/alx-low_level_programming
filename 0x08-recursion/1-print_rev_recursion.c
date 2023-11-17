#include "main.h"
/**
 * _print_rev_recursion - to output string in reverse order
 *
 * @s: string input
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
