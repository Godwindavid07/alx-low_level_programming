#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alph[i]);
	}
			putchar('\n');
			return (0);
}
