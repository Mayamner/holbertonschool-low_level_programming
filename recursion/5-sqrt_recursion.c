#include "main.h"

/**
 * _sqrt_helper - helper function to find square root
 * @n: the number
 * @i: the current guess
 *
 * Return: square root or -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
