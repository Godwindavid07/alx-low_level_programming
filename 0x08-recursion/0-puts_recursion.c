#include "main.h"

/**
 * _puts_recursion - print recursion foward
 *
 * @s: string to be printed (input)
 *
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
