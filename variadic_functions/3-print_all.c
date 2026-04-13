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
	int separator;

	va_start(args, format);
	i = 0;
	separator = 0;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			if (separator)
				printf(", ");
			printf("%c", va_arg(args, int));
			separator = 1;
		}
		if (format[i] == 'i')
		{
			if (separator)
				printf(", ");
			printf("%d", va_arg(args, int));
			separator = 1;
		}
		if (format[i] == 'f')
		{
			if (separator)
				printf(", ");
			printf("%f", va_arg(args, double));
			separator = 1;
		}
		if (format[i] == 's')
		{
			if (separator)
				printf(", ");
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			separator = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
