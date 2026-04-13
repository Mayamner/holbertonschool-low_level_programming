#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

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
	char *types = "cifs";
	int sep;

	va_start(args, format);
	i = 0;
	sep = 0;
	while (format && format[i])
	{
		str = strchr(types, format[i]);
		if (str)
		{
			if (sep)
				printf(", ");
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
			}
			sep = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
