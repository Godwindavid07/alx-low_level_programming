#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to the allocated space in memory
 * @str: input
 * Return: pointer to the allocated memorry
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strdown;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdown = (char *)malloc(sizeof(char) * (i + 1));

	if (strdown == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strdown[j] = str[j];
	}
	return (strdown);
}
