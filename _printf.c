#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format:  a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{"f", print_float},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	printed_chars = parser(format, f_list, list);
	va_end(list);
	return (printed_chars);
}
