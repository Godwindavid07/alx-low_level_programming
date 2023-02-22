#include "main.h"
/**
 * main  - prints the out  put
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the lowercase alphabet, from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
