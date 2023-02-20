#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %c byte(s)\n", (char) sizeof(a));
printf("Size of int: %d byte(s)\n", (int) sizeof(b));
printf("Size of long int: %li byte(s)\n", (long int) sizeof(c));
printf("Size of long long int: %lld byte(s)\n", (long long int) sizeof(d));
printf("Size of float: %f byte(s)\n", (float)sizeof(f));
return (0);
}

