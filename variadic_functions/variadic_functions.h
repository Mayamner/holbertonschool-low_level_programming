#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @args: argument list
 */
void print_char(va_list args);

/**
 * print_int - prints an int
 * @args: argument list
 */
void print_int(va_list args);

/**
 * print_float - prints a float
 * @args: argument list
 */
void print_float(va_list args);

/**
 * print_string - prints a string
 * @args: argument list
 */
void print_string(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
