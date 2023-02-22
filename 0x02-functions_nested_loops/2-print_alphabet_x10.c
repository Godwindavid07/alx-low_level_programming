#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int b;

	b = 0;

	while (0 < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
