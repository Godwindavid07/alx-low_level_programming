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
printf("Size of char: %lu byte(s)\n", (unsigned long int) sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long int) sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long int) sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long int) sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long int)sizeof(f));
return (0);
}

