#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to encode
 *
 * Return: pointer to the modified string
 */
char *leet(char *s)
{
	int i;
	char lower[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		int j;

		j = 0;
		while (lower[j] != '\0')
		{
			if (s[i] == lower[j])
				s[i] = nums[j];
			j++;
		}
		i++;
	}
	return (s);
}
