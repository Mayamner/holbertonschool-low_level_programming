#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
