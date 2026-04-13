#include "variadic_functions.h"
#include <stdio.h>
/**
* print_char - prints a char
* @args: va_list of arguments
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* print_int - prints an int
* @args: va_list of arguments
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @args: va_list of arguments
*/

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
* print_string - prints a string
* @args: va_list of arguments
*/
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	printf("%s", str ? str : "(nil)");
}
/**
* print_all - prints anything
* @format: list of types of arguments
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	int sep;
	int j;
/**
* struct fmt - struct for format types
* @type: the format character
* @f: the function associated
*/
	struct fmt
	{
		char type;
		void (*f)(va_list);
	} types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);
	i = 0;
	sep = 0;
	while (format && format[i])
	{
		j = 0;
		while (types[j].f)
		{
			if (format[i] == types[j].type)
			{
				if (sep)
					printf(", ");
				types[j].f(args);
				sep = 1;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
