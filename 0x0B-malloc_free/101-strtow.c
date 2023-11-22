#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string input
 * Return: NULL on failiure
 */
char **strtow(char *str)
{
char **words;
int i, j, k, w, len, start, end;

if (str == NULL || str[0] == '\0')
{
return (NULL);
}
w = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
w++;
}

words = malloc(sizeof(char *) * (w + 1));
if (words == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
start = i;
end = i;
while (str[end] != ' ' && str[end] != '\0')
end++;
len = end - start;
words[k] = malloc(sizeof(char) * (len + 1));
if (words[k] == NULL)
{
for (j = 0; j < k; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[k][j] = str[start + j];
words[k][j] = '\0';
k++;
}
}
words[k] = NULL;
return (words);
}
