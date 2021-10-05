#include "main.h"

static int (*check_spec(const char *format))(va_list);

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * You don’t have to reproduce the buffer handling of the C library
 * printf function
 * You don’t have to handle the flag characters
 * You don’t have to handle field width
 * You don’t have to handle precision
 * You don’t have to handle the length modifiers
 * @format: A string containing all the desired characters
 *
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_spec(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);

	return (count);
}

/**
 * check_spec - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_spec(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c}, {"s", print_s},
		{"i", print_i}, {"d", print_d},
		{"u", print_u}, {"b", print_b},
		{"o", print_o}, {"x", print_x},
		{"X", print_X}, {"p", print_p},
		{"S", print_S}, {"r", print_r},
		{"R", print_R}, {NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}