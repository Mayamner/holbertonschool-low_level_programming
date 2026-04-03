#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;
	int i;
	int j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
