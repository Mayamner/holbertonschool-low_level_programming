#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
