#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int sep;
	char fmt;

	va_start(args, format);
	i = 0;
	sep = 0;
	while (format && format[i])
	{
		fmt = format[i];
		str = (fmt == 's') ? va_arg(args, char *) : NULL;
		if (fmt == 'c')
			printf("%s%c", sep++ ? ", " : "", va_arg(args, int));
		if (fmt == 'i')
			printf("%s%d", sep++ ? ", " : "", va_arg(args, int));
		if (fmt == 'f')
			printf("%s%f", sep++ ? ", " : "", va_arg(args, double));
		if (fmt == 's')
			printf("%s%s", sep++ ? ", " : "", str ? str : "(nil)");
		i++;
	}
	va_end(args);
	printf("\n");
}
