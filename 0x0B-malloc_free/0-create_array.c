#include "main.h"
#include <stdlib.h>
/**
 * create_array - to creat an array of char
 * @size: input for the size of the array in size_t
 * @c: stores the string of char
 * Return: pointer to the base char c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
