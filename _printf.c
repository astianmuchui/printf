#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, j = 0, chars_printed = 0, flag = 0;
	va_list arg_ptr;
	char_t opt[] = {{"c", print_c}, {"s", print_s}, {"d", print_d},
			{"i", print_i}, {"b", print_b}, {"u", print_u},
			{"o", print_o}, {"x", print_x}, {"X", print_X},
			{"S", print_S}, {NULL, NULL}};

	va_start(arg_ptr, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format != NULL && format[i] != '\0') 
	{
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar(format[i + 1]), i++, chars_printed++;
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0, flag = 0;
			while (opt[j].code != NULL)
			{
				if (opt[j].code[0] == format[i + 1])
				{
					chars_printed += opt[j].print_func(arg_ptr), flag = 1, i++;
					break;
				}
				j++;
			}

			if (!flag)
				_putchar(format[i]), chars_printed++;
		}

		else
			_putchar(format[i]), chars_printed++;
		i++;
	}
	va_end(arg_ptr);
	return (chars_printed);
}
