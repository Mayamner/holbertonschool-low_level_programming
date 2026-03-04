#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign;
	unsigned int result;

	sign = 1;
	result = 0;
	while (*s != '\0')
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		s++;
	}
	if (sign == -1)
		return (-(int)result);
	return ((int)result);
}
