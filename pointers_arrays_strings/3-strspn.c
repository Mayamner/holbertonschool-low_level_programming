#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the accepted bytes string
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;
	int found;

	count = 0;
	while (*s != '\0')
	{
		found = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				found = 1;
			i++;
		}
		if (found == 0)
			break;
		count++;
		s++;
	}
	return (count);
}
