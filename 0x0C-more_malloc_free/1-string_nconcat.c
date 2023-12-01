#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: No of elements to cancatinate
 *
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *ptr;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
	{
		n = b;
	}

	ptr = malloc(sizeof(char) * (a + b + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (c = 0; c < b; c++)
	{
		ptr[c + 1] = s2[c];
	}
	ptr[a + b] = '\0';
	return (ptr);
}
